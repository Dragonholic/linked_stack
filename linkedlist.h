//
// Created by yongluck on 2022-09-22.
//

#ifndef WEDPRO_LINKEDLIST_H
#define WEDPRO_LINKEDLIST_H

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

typedef struct {
    node *head;
    unsigned int len;
    node *tail;
}ll;

void add(ll *list, int pos, int data);

void add_last(ll *list, int data);

int get_size(ll *list);

int get_at(ll *list, int pos);

void set_at(ll *list, int pos, int data);

void concat(ll *list, ll*list2);

struct node rem(ll *list, int pos);

struct node rem_last(ll *list);

int contains(ll *list, int data);

void pri_list(ll *list);


#endif //WEDPRO_LINKEDLIST_H