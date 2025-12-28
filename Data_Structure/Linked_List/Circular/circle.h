#ifndef CIRCULAR_LINKED_LIST
#define CIRCULAR_LINKED_LIST


#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
} ListHead;

ListHead* createListHead() {
    ListHead* LH;

    LH = (ListHead*)malloc(sizeof(ListHead));
    LH -> head = NULL;

    return LH;

}

#endif
