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
#include "stack.h"


void stack_init(stack *_s)
{
        assert(_s != NULL);
        
        _s->data = NULL;
        _s->size = 0;
}

stack *stack_create()
{
        stack *s;
        
        if((s = (stack *)malloc(sizeof(stack))) != NULL) {
                stack_init(s);
        }
        
        return(s);
}

int stack_push(stack *_s, void *_elem)
{
        int e = 0;
        
        if((e = list_push(&_s->data, _elem)) >= 0)
                _s->size++;

        return(e);
}

void *stack_pop(stack *_s)
{
        if(_s->size == 0) {
                return(NULL);
        } else {
                _s->size--;
                return(list_pop(&_s->data));
        }
}

size_t stack_size(stack *_s)
{
        return(_s->size);
}

int stack_is_empty(stack *_s)
{
        return(_s->size == 0);
}

void stack_delete(stack *_s)
{
        if(_s != NULL) {
                list_delete(&_s->data);
                free(_s);
        }
}

void stack_reset(stack *_s)
{
        if(_s != NULL) {
                list_delete(&_s->data);
                stack_init(_s);
        }
}



void stack_destroy(stack *_s)
{
        if(_s != NULL) {
                list_destroy(&_s->data);
                free(_s);
        }
}

node_l *stack_data(stack *_s)
{
        return(_s->data);
}
