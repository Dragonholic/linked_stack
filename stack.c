//
// Created by asdcv on 2022-09-29.
//

#include "stack.h"

void push(stack *s, int data) {
    add_last(s, data);
}

int pop(stack *s) {
    return rem_last(s).data;
}

int peek(stack* s) {
    get_at(s, s->len-1);
}
