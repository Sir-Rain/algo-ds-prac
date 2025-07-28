#ifndef LINKED_LIST_SINGLE
#define LINKED_LIST_SINGLE

#include <stdio.h>
#include <stdlib.h>

typedef int nodeDT;

typedef struct Node {
    nodeDT nodeData;
    struct Node* nextNode;
} Node;

/**
    Create Node
    Destroy Node
    Append Node
    Insert After the current node
    Insert New Head insted current head
    Remove Node from the Linked List
    Get Node At the specific Location
    Get the number of the Nodes in the List
*/

Node* createNode(nodeDT data);
void destroyNode(Node* node);
void appendNode(Node** head, Node* newNode);
void insertAfter(Node* currentNode, Node* newNode);
void insertNewHead(Node** currentHead, Node* newHead);
void removeNode(Node** head, Node* node);
Node* getNodeAt(Node* head, int location);
int getNodeCound(Node* head);

#endif