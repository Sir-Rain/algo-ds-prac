#ifndef HEAP
#define HEAP

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef int NodeData;

typedef struct Node {
    NodeData data;
} Node;

typedef struct Heap {
    Node* nodes;
    int capacity;
    int usedSize;
} Heap;

Heap* createHeap(int initialSize);
void destroyHeap(Heap* heap);
void insert(Heap* heap, NodeData newData);
void deleteMin(Heap* heap, Node* root);
int getParent(int index);
int getLeftChild(int index);
void swapNodes(Heap* heap, int indexF, int indexS);
void printNodes(Heap* heap);

#endif