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
#include <assert.h>
#include <string.h>
#include "list.h"


int list_push(node_l **_x, void *_data)
{
        node_l *n = NULL;

        assert(_x != NULL);

        if((n = (node_l *)malloc(sizeof(node_l))) == NULL) {
                return(-1);
        } else {
                n->data = _data;
                n->next = *_x;

                *_x = n;
                return(0);
        }
}

void *list_pop(node_l **_x)
{
        node_l *n = NULL;
        void *data;
        
        assert(_x != NULL);

        if(*_x == NULL)
                return(NULL);
                
        n = *_x;
        *_x  = n->next;
        data = n->data;
        free(n);

        return(data);
}

int list_move(node_l **_dest, node_l **_src)
{
        node_l *n = NULL;
        
        assert((_dest != NULL) && (_src != NULL));

        if(*_src == NULL)
                return(-1);

        n = *_src;
        *_src = n->next;
        n->next = *_dest;
        *_dest = n;

        return(0);
}

int list_reverse(node_l **_x)
{
        node_l *n = NULL;

        assert(_x != NULL);

        while(list_move(&n, _x) >= 0);
        *_x = n;

        return(0);
}

node_l *list_sub(const node_l *_x, int _pos)
{
        int i = 0;
        node_l *n = (node_l *)_x;

        assert(_x != NULL);

        if(_pos < 0)
                return(NULL);

        while(i++ < _pos) {
                if((n = n->next) == NULL)
                        return(NULL);
        }

        return(n);
}

int list_insert(node_l **_x, int _pos, void *_data)
{
        node_l *p;

        assert(_x != NULL);

        if(_pos < 0)
                return(-1);
                
        if(_pos == 0)
                return(list_push(_x, _data));

        if((p = list_sub(*_x, _pos-1)) == NULL)
                return(-1);

        return(list_push(&(p->next), _data));
}

void *list_remove(node_l **_x, int _pos)
{
        node_l *current = *_x;
        node_l *next = NULL;
        void *data;

        assert(_x != NULL);

        if(_pos < 0)
                return(NULL);
        
        if(*_x == NULL)
                return(NULL);

        if(_pos == 0)
                return(list_pop(_x));

        while(--_pos) {
                current = current->next;
        }

        if((next = current->next) == NULL)
                return(NULL);
                
        data = next->data;
        current->next = next->next;

        free(next);
        return(data);
}

void *list_get(const node_l *_x, int _pos)
{
        int i = 0;

        if(_pos < 0)
                return(NULL);

        while(_x != NULL) {
                if(_pos == i++)
                        return(_x->data);
                _x = _x->next;
        }

        return(NULL);
}

size_t list_size(const node_l *_x)
{
        size_t s = 0;

        for(; _x != NULL; s++, _x = _x->next);
        return(s);
}

node_l *list_join(node_l *_dest, node_l *_src)
{
        node_l *n = _dest;

        if(_dest == NULL)
                return(_src);

        if(_src == NULL)
                return(_dest);

        while(_dest->next != NULL)
                _dest = _dest->next;
                
        _dest->next = _src;

        return(n);
}

void list_print(const node_l *_a)
{
        data *foo;
        int i = 0;

        while(_a != NULL) {
                foo = (data *)_a->data;
                printf("%03d: %3d - %s\n", i++, foo->n, foo->str);
                _a = _a->next;
        }
}

/* hare and tortoise approach / classic Floyd’s Cycle Finding Algorithm */
int list_split(node_l **_src, node_l **_front, node_l **_back)
{
        node_l *fast, *slow;

        assert((_src != NULL) && (_front != NULL) && (_back != NULL));

        if((*_src == NULL) || ((*_src)->next == NULL)) {
                *_back = NULL;
        } else {
                slow = *_src;
                fast = slow->next;
                
                while(fast != NULL) {
                        fast = fast->next;
                        if(fast != NULL) {
                                slow = slow->next;
                                fast = fast->next;
                        }
                }
                *_back = slow->next;
                slow->next = NULL;
        }

        *_front = *_src;
        *_src = NULL;
        return(0);
}

int list_merge(node_l **_dest, node_l **_a, node_l **_b, int _cmp(void *, void *))
{
        node_l *ret = NULL;
        node_l **last = &ret;

        assert((_dest != NULL) && (_a != NULL) && (_b != NULL));

        for(;;) {
                if(*_a == NULL) {
                        *last = *_b;
                        break;
                }

                if(*_b == NULL) {
                        *last = *_a;
                        break;
                }
                
                if(_cmp((*_a)->data, (*_b)->data) <= 0) {
                        list_move(last, _a);
                } else {
                        list_move(last, _b);
                }
                
                last = &((*last)->next);
        }

        *_dest = ret;
        return(0);
}

int list_sort(node_l **_x, int _cmp(void *, void *))
{
        node_l *l, *r;

        assert(_x != NULL);

        if(*_x == NULL || (*_x)->next == NULL)
                return(0);

        list_split(_x, &l, &r);

        list_sort(&l, _cmp);
        list_sort(&r, _cmp);
        
        list_merge(_x, &l, &r, _cmp);

        return(0);
}

int list_copy(const node_l *_src, node_l **_dest)
{
        assert(_src != NULL);

        *_dest = NULL;

        while(_src) {
                if(list_push(_dest, _src->data)) {
                        return(-1);
                } else {
                        _src = _src->next;
                }
        }
        return(list_reverse(_dest));
}

int list_realloc(node_l *_x, size_t _sz)
{
        void *data;

        assert(_x != NULL);

        while(_x) {
                if((data = malloc(_sz)) == NULL) {
                        return(-1);
                } else {
                        _x->data = memcpy(data, _x->data, _sz);
                        _x = _x->next;
                }
        }
        return(0);
}

int list_dup(node_l *_src, node_l **_dest, size_t _sz)
{
        assert(_src != NULL);

        if(list_copy(_src, _dest) < 0)
                return(-1);

        if(list_realloc(*_dest, _sz) < 0)
                return(-1);
                
        return(0);
}

void list_delete(node_l **_x)
{
        assert(_x != NULL);
        
        while(*_x) {
                list_pop(_x);
        }
}

void list_destroy(node_l **_x)
{
        assert(_x != NULL);

        while(*_x) {
                free(list_pop(_x));
        }
}

/* auxiliary function to create a short list */
node_l *list_create123()
{
        node_l *n = NULL;
        data *a=malloc(sizeof(data)),
             *b=malloc(sizeof(data)),
             *c=malloc(sizeof(data));

        a->n = 1;
        strcpy(a->str, "foo");
        b->n = 2;
        strcpy(b->str, "bar");
        c->n = 3;
        strcpy(c->str, "snafu");

        list_push(&n, a);
        list_push(&n, b);
        list_push(&n, c);
        return(n);
}

/* auxiliary function for testing list_sort() */
int cmp(void *_a, void *_b)
{
        data *a = (data *)_a, *b = (data *)_b;

        if(a->n < b->n) return(-1);
        if(a->n > b->n) return(1);
        return(0);
}

int list_foreach(node_l *_x, int _func(void *))
{
        int ret = 0;

        while(_x) {
                ret *= _func(_x->data);
                _x = _x->next;
        }
                
        return(ret);
}
