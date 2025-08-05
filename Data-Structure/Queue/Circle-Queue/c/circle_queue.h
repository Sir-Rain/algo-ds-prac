#ifndef ARRAY_CIRCLE_QUEUE
#define ARRAY_CIRCLE_QUEUE

#include <stdio.h>
#include <stdlib.h>

typedef int NodeData;

typedef struct Node {
    NodeData data;
} Node;

typedef struct ArrayCircleQueue {
    int capacity;
    int front;
    int rear;

    Node* nodes;
} ArrayCircleQueue;

void createQueue(ArrayCircleQueue** queue, int capacity);
void destroyQueue(ArrayCircleQueue* queue);
void enqueue(ArrayCircleQueue* queue, NodeData data);
NodeData dequeue(ArrayCircleQueue* queue);
int getSize(ArrayCircleQueue* queue);
int isEmpty(ArrayCircleQueue* queue);
int isFull(ArrayCircleQueue* queue);

#endif