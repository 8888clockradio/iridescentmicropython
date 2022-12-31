/* (C) Copyright 2001 by Felix Opatz <felix@zotteljedi.de>
 *
 * Copyright (c) 2003
 *    Felix Opatz <felix@zotteljedi.de>.  All rights reserved.
 *
 * Copyright (c) 2007
 *    Philip Busch <philip@0xe3.com>. All rights reserved.
 *
 * Reads MPEG frame header information.
 * See http://www.dv.co.yu/mpgscript/mpeghdr.htm for MPEG frame header specs.
 * See http://www.zotteljedi.de/kleinkram/src/mp3info.c for original version.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer as
 *    the first lines of this file unmodified.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL FELIX OPATZ BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mpeg.h"

/* some magic numbers, see docs */
static const int bitrates[2][3][15] = {
        {
                /* layer 3 */
                {
                        0, 32, 40, 48, 56, 64, 80,  96, 112, 128, 160, 192, 224, 256, 320
                },

                /* layer 2 */
                {
                        0, 32, 48, 56, 64, 80, 96, 112, 128, 160, 192, 224, 256, 320, 384
                },

                /* layer 1 */
                {
                        0, 32, 64, 96, 128, 160, 192, 224, 256, 288, 320, 352, 384, 416, 448
                }
        },

        {
                /* layer 3 */
                {
                        8, 16, 24, 32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160
                },

                /* layer 2 */
                {
                        8, 16, 24, 32, 40, 48, 56, 64, 80, 96, 112, 128, 144, 160
                },

                /* layer 1 */
                {
                        0, 32, 48, 56, 64, 80, 96, 112, 128, 144, 160, 176, 192, 224, 256
                }
        }
};

static const int freqs[3][3] = {
        /* MPEG 1 */
        {
                44100, 48000, 32000
        },
        /* MPEG 2 */
        {
                22050, 24000, 16000
        },
        /* MPEG 2.5 */
        {
                11025, 12000, 8000
        }
};


/* our own ntohl() implementation for strict ANSI compliance */
#ifndef ntohl
        #define ntohl own_ntohl
#endif

static unsigned long int own_ntohl(unsigned long int in)
{
        unsigned char a[4], t;

        memcpy(a, &in, 4);

        t = a[3];
        a[3] = a[0];
        a[0] = t;

        t = a[2];
        a[2] = a[1];
        a[1] = t;

        memcpy(&in, a, 4);

        return in;
}


int mpeg_read(const char *_path, struct mpeg *_mpeg)
{
        FILE *fp;
        unsigned long int header;

        if ((fp = fopen(_path, "rb")) == NULL) {
                return(-1);
        }

        if((header = mpeg_seek_next_header(fp)) == (unsigned long int)-1) {
                return(-1);
        }

        if(mpeg_extract_info(header, _mpeg) == -1) {
                return(-1);
        }

        fclose(fp);
        return(0);
}

unsigned long int mpeg_seek_next_header(FILE *_fp)
{
        unsigned long int header;
        int c;

        while((c = fgetc(_fp)) != 0xff && c != EOF);

        if (feof(_fp))
                return(-1);

        ungetc(c, _fp);
        fread(&header, 1, sizeof(header), _fp);
        header = ntohl(header);

        return(header);
}

int mpeg_extract_info(unsigned long int _header, struct mpeg *_mpeg)
{
        if ((_header & MASK_SYNC) != MASK_SYNC)
                return(-1);

        _mpeg->mpeg_version = ((_header & MASK_MPEG) >> SHIFT_MPEG);

        _mpeg->layer_desc = ((_header & MASK_LAYER) >> SHIFT_LAYER);

        _mpeg->bit_prot = ((_header & MASK_PROT) >> SHIFT_PROT);

        /* causes pain for MPEG_VERSION_2_5 */
        _mpeg->bitrate = bitrates[(_mpeg->mpeg_version == MPEG_VERSION_1)?0:1][_mpeg->layer_desc - 1][((_header & MASK_BITRATE) >> SHIFT_BITRATE)];

        switch(_mpeg->mpeg_version)
        {
                case MPEG_VERSION_1:
                        _mpeg->freq = freqs[0][((_header & MASK_FREQ) >> SHIFT_FREQ)];
                        break;
                case MPEG_VERSION_2:
                        _mpeg->freq = freqs[1][((_header & MASK_FREQ) >> SHIFT_FREQ)];
                        break;
                case MPEG_VERSION_2_5:
                        _mpeg->freq = freqs[2][((_header & MASK_FREQ) >> SHIFT_FREQ)];
                        break;
        }

        _mpeg->bit_padding = ((_header & MASK_PADDING) >> SHIFT_PADDING);

        _mpeg->bit_priv = ((_header & MASK_PRIV) >> SHIFT_PRIV);

        _mpeg->chan = (_header & MASK_CHAN) >> SHIFT_CHAN;

        _mpeg->mode_ext = (_header & MASK_MODE_EXT) >> SHIFT_MODE_EXT;

        _mpeg->bit_copyright = (_header & MASK_COPYRIGHT) >> SHIFT_COPYRIGHT;

        _mpeg->bit_orig = (_header & MASK_ORIG) >> SHIFT_ORIG;

        _mpeg->emphasis = (_header & MASK_EMPHASIS) >> SHIFT_EMPHASIS;

        return(0);
}

size_t mpeg_frame_length(struct mpeg *_mpeg)
{
        int f = (_mpeg->layer_desc == LAYER_VERSION_1)?12:36;

        return(f * _mpeg->bitrate * 1000 / _mpeg->freq + _mpeg->bit_padding);
}

size_t mpeg_frame_bytes(struct mpeg *_mpeg)
{
        return(4 * mpeg_frame_length(_mpeg));
}

void mpeg_print(struct mpeg *_mpeg)
{
        float ver;
        int layer;
        const char *layers[] = {"I", "II", "III"};
        const char *chan_modes[] = {
                "Stereo",
                "Joint stereo (Stereo)",
                "Dual channel (Stereo)",
                "Single channel (Mono)"
        };

        const char *emphasis[] = {
                "none",
                "50/15 ms",
                "reserved",
                "CCIT J.17"
        };

        if (_mpeg->mpeg_version == MPEG_VERSION_1)
                ver = 1;
        if (_mpeg->mpeg_version == MPEG_VERSION_2)
                ver = 2;
        if (_mpeg->mpeg_version == MPEG_VERSION_2_5)
                ver = 2.5;

        if (_mpeg->layer_desc == LAYER_VERSION_1)
                layer = 1;
        if (_mpeg->layer_desc == LAYER_VERSION_2)
                layer = 2;
        if (_mpeg->layer_desc == LAYER_VERSION_3)
                layer = 3;

        printf("MPEG Version %.0f / Layer %s (", ver, layers[layer-1]);

        if (_mpeg->mpeg_version != MPEG_VERSION_2_5)
                printf("%i KBit/s, ", _mpeg->bitrate);

        printf("%i Hz, ", _mpeg->freq);

        printf("%s)\n", chan_modes[_mpeg->chan]);

        printf("Mode extension: ");
        if(_mpeg->chan == CMODE_JOINT_STEREO) {
                if(_mpeg->layer_desc == LAYER_VERSION_3) {
                        printf("intensity stereo %s, MS stereo %s\n",
                                ((_mpeg->mode_ext==1) || (_mpeg->mode_ext==3))?"on":"off",
                                (_mpeg->mode_ext > 1)?"on":"off"
                        );
                } else {
                        printf("bands %d to 31\n", (_mpeg->mode_ext + 1) * 4);
                }
        } else {
                printf("no mode extension\n");
        }

        printf("Emphasis:\t%s\n", emphasis[_mpeg->emphasis]);
        printf("Protection:\t%s\n", _mpeg->bit_prot?"no":"yes");
        printf("Padding:\t%s\n", _mpeg->bit_padding?"yes":"no");
        printf("Private:\t%s\n", _mpeg->bit_priv?"yes":"no");
        printf("Copyright:\t%s\n", _mpeg->bit_copyright?"yes":"no");
        printf("Original media:\t%s\n", _mpeg->bit_orig?"yes":"no");
        
        printf("Frame size:\t%d slots (%d bytes)\n", mpeg_frame_length(_mpeg), mpeg_frame_bytes(_mpeg));
}

int main(int argc, char *argv[])
{
        struct mpeg mpeg_data;
        int i;

        if (argc < 2) {
                fprintf(stderr, "USAGE: %s <file(s)>\n", argv[0]);
                return 1;
        }

        for (i = 1; i < argc; i++) {
                if(mpeg_read(argv[i], &mpeg_data) < 0) {
                        fprintf(stderr, "%s: invalid/missing header, ignoring\n",       argv[i]);
                } else {
                        printf("MPEG frame header information for %s:\n", argv[i]);
                        mpeg_print(&mpeg_data);
                }
        }

        return(0);
}