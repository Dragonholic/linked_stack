#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "linkedlist.h"


int main() {
    ll list = {list.tail, 0, list.head};
    add(&list, 0, 1);
    add(&list, 0, 2);
    add(&list, 0, 3);
    add(&list, 1, 4);
    add(&list, 4, 5);
    add(&list, 5, 10);
    rem(&list, 5);


    ll list2 = {list2.tail, 0, list2.tail};
    add(&list2, 0, 10);
    add(&list2, 1, 20);

    node *tmp = list.head;

    pri_list(&list);

    printf("\n");
    printf("size=%d\n", get_size(&list)); // 성공
    printf("(4) = %d\n", get_at(&list, 4)); // 성공


    set_at(&list, 4, 100); // 성공
    printf("(4) = %d\n", get_at(&list, 4)); // 성공
    printf("\n");
    pri_list(&list);

    tmp = list2.head;

    concat(&list, &list2);
    tmp = list.head;

    pri_list(&list);

    printf("\n");

    printf("contains=%d\n", contains(&list, 22));

}