/*  Copyright (c) 2006-2007, Philip Busch <broesel@studcs.uni-sb.de>
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *   - Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   - Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "array.h"


static void array_initialize(array *_a, int _from, int _to)
{
        char *p;

        printf("initializing %d to %d\n", _from, _to);

        p = (char *)_a->data + _from;
        while(_from++ < _to) {
                *p++ = 0;
        }
        
        _a->sz_init = _to;
}

void array_init(array *_a)
{
        assert(_a != NULL);
        
        _a->sz_init  = 0;
        _a->sz_alloc = 0;
        _a->data     = NULL;
}

array *array_create()
{
        array *a;

        if((a = (array *)malloc(sizeof(array))) != NULL) {
                array_init(a);
        }
        
        return(a);
}

void *array_allocate(array *_a, size_t _sz, int _pos)
{
        unsigned int size;
        void *tmp = NULL;

        if(_pos < 0)
                return(NULL);

        if((_pos + 1) * _sz <= _a->sz_init)
                return(_a->data + _pos * _sz);

        if((_pos + 1) * _sz <= _a->sz_alloc) {
                array_initialize(_a, _a->sz_init + _sz, (_pos + 1) * _sz);
                return(_a->data + _pos * _sz);
        }

        size = 2;
        while(size <= (_pos+1) * _sz)
                size *= 2;

        if((tmp = realloc(_a->data, size)) != NULL) {
                _a->data = tmp;
                _a->sz_alloc = size;
                array_initialize(_a, _a->sz_init, (_pos + 1) * _sz);
                return(_a->data + _pos * _sz);
        }

        return(NULL);
}

static void array_print(array *_a)
{
        unsigned int i = 0;
        int *p = (int *)_a->data;
        
        printf("init: %d\talloc: %d\n", _a->sz_init, _a->sz_alloc);
        
        for(i = 0; i < _a->sz_alloc / sizeof(int); i++) {
                printf("%2i: %i\n", i, p[i]);
        }
}

void *array_get(array *_a, size_t _sz, int _pos)
{
        if(_pos < 0)
                return(NULL);

        if((_pos + 1) * _sz > _a->sz_init)
                return(NULL);
                
        return(_a->data + (_pos * _sz));
}

size_t array_length(array *_a, size_t _sz)
{
        return(_a->sz_init / _sz);
}

void array_truncate(array *_a, size_t _sz, int _len)
{
        if((_len < 0) || (_a->sz_init <= _len * _sz))
                return;
                
        _a->sz_init = _len * _sz;
}

void array_reset(array *_a)
{
        if(_a->data != NULL)
                free(_a->data);
        _a->sz_init  = 0;
        _a->sz_alloc = 0;
        _a->data     = NULL;
}

void array_delete(array *_a)
{
        array_reset(_a);
        free(_a);
}

int array_equal(array *_a, array *_b)
{
        unsigned int i;
        char *a, *b;

        if(_a->sz_init == _b->sz_init) {
                a = (char *)_a->data;
                b = (char *)_b->data;
                
                for(i = 0; i < _a->sz_init; i++) {
                        if(a[i] != b[i]) {
                                return(0);
                        }
                }
                return(1);
        }

        return(0);
}

void array_sort(array *_a, size_t _sz, int(*_cmp)(const void *, const void *))
{
        qsort(_a->data, array_length(_a, _sz), _sz, _cmp);
}

static int cmp(int *_a, int *_b)
{
        return(*_a - *_b);
}

int array_cat(array *_a, array *_b)
{
        assert(_a != NULL);
        assert(_b != NULL);
        
        return(array_catb(_a, _b, _b->sz_init));
}

int array_catb(array *_a, array *_b, size_t _len)
{
        size_t old_size = _a->sz_init;

        assert(_a != NULL);
        assert(_b != NULL);

        if(_len > _b->sz_init)
                return(-1);

        if(array_allocate(_a, sizeof(char), _a->sz_init + _len - 1) == NULL)
                return(-1);
        
        memcpy(_a->data + old_size, _b->data, _len);
        return(0);
}

int main()
{
        static array x;
        static array y;
        int *p;

        p = (int*)array_allocate(&x, sizeof(int), 5);
        *p = 17;
        array_print(&x);

        p = (int *)array_allocate(&y, sizeof(int), 3);
        p = (int *)array_start(&y);
        p[0] = 3;
        p[1] = 5;
        p[2] = 4;
        p[3] = 17;
        array_print(&y);

        array_cat(&x, &y);
        array_print(&x);
        
        
        system("PAUSE");
        return(0);
}