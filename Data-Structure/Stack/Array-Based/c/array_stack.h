#ifndef ARRAY_STACK
#define ARRAY_STACK

#include <stdio.h>
#include <stdlib.h>

typedef int nodeDT;

typedef struct Node {
    nodeDT data; 
} Node;

typedef struct ArrayStack {
    int capacity;
    int top;
    Node* nodes;
} ArrayStack;

void createStack(ArrayStack** stack, int capacity);
void destroyStack(ArrayStack* stack);
void push(ArrayStack* stack, nodeDT data);
nodeDT pop(ArrayStack* stack);
nodeDT top(ArrayStack* stack);
int getStackSize(ArrayStack* stack);
int isEmpty(ArrayStack *stack);


#endif