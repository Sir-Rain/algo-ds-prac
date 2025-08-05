#ifndef BINARY_TREE
#define BINARY_TREE

#include <stdio.h>
#include <stdlib.h>

typedef char NodeData;

typedef struct Node {
    struct Node* leftChild;
    struct Node* rightChild;

    NodeData data;

} Node;

Node* createNode(NodeData data);
void destroyNode(Node* node);
void destroyTree(Node* root);

void preorderPrintTree(Node* node);
void inorderPrintTree(Node* node);
void postorderPrintTree(Node* node);

#endif