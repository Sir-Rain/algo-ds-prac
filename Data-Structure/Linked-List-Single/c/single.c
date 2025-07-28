#include "single.h"

Node* createNode(nodeDT data){
    Node* newNode = (Node*)malloc(sizeof(Node));

    (*newNode).nodeData = data;
    (*newNode).nextNode = NULL;

    return newNode;
}

void destroyNode(Node* node) {
    free(node);
}

void appendNode(Node** head, Node* newNode) {
    if ((*head) == NULL) {
        *head = newNode;
    } else {
        Node* tail = *head;

        while ((*tail).nextNode != NULL) {
            tail = (*tail).nextNode;
        }

        (*tail).nextNode = newNode;
    }
}

void insertAfter(Node* currentNode, Node* newNode) {
    (*newNode).nextNode = (*currentNode).nextNode;
    (*currentNode).nextNode = newNode;
}

void insertNewHead(Node** currentHead, Node* newHead) {
    if (*currentHead == NULL) {
        (*currentHead) = newHead;
    } else {
        (*newHead).nextNode = (*currentHead);
        (*currentHead) = newHead;
    }
}

void removeNode(Node** head, Node* node) {
    if ( *head == node) { 
        *head = (*node).nextNode;
    } else {
        Node* current = *head;

        while (current != NULL && (*current).nextNode != node) {
            current = (*current).nextNode;
        }

        if(current != NULL) {
            (*current).nextNode = (*node).nextNode;
        }
    }
}

Node* getNodeAt(Node* head, int location) {
    Node* current = head;

    while (current != NULL && (--location) >= 0) {
        current = (*current).nextNode;
    }

    return current;
}

int getNodeCount(Node* head) {
    int count = 0;
    Node* current = head;

    while ( current != NULL ) {
        current = (*current).nextNode;
        count++;
    }

    return count;
}