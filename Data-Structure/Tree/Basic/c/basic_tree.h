#ifndef BASIC_TREE
#define BASIC_TREE

#include <stdio.h>
#include <stdlib.h>

typedef char NodeData;

typedef struct Node {
    NodeData data;

    struct Node* leftChild;
    struct Node* rightSibling;
} Node;

Node* createNode(NodeData data);
void destroyNode(Node* node);
void destroyTree(Node* root);

void addChildNode(Node* parentNode, Node* childNode);
void printTree(Node* node, int depth);

#endif