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

#ifndef _LIST_H
#define _LIST_H

typedef struct node_l node_l;
struct node_l {
        node_l *next;
        void *data;
};

typedef struct _data {
        int n;
        char str[1024];
} data;


int list_push(node_l **_x, void *_data);

void *list_pop(node_l **_x);

int list_move(node_l **_dest, node_l **_src);

int list_reverse(node_l **_x);

node_l *list_sub(const node_l *_x, int _pos);

int list_insert(node_l **_x, int _pos, void *_data);

void *list_remove(node_l **_x, int _pos);

void *list_get(const node_l *_x, int _n);

size_t list_size(const node_l *_x);

node_l *list_join(node_l *_a, node_l *_b);

void list_print(const node_l *_a);

int list_split(node_l **_src, node_l **_front, node_l **_back);

int list_merge(node_l **_dest, node_l **_a, node_l **_b, int _cmp(void *, void *));

int list_sort(node_l **_x, int _cmp(void *, void *));

int list_copy(const node_l *_src, node_l **_dest);

int list_realloc(node_l *_x, size_t _sz);

int list_dup(node_l *_src, node_l **_dest, size_t _sz);

void list_delete(node_l **_x);

void list_destroy(node_l **_x);

int list_foreach(node_l *_x, int _func(void *));

#endif  /* ! _LIST_H */