#include "basic_tree.h"

Node* createNode(NodeData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    (*newNode).data = data;
    (*newNode).leftChild = NULL;
    (*newNode).rightSibling = NULL;

    return newNode;
}

void destoryNode(Node* node) {
    free(node);
}

void destoryTree(Node* root) {
    if (root == NULL) {
        return;
    }


    if ( (*root).rightSibling != NULL) {
        destoryTree((*root).rightSibling );
    }

    if( (*root).leftChild != NULL) {
        destoryTree( (*root).leftChild );

    }

    destoryNode(root);
}

void addChildNode(Node* parentNode, Node* childNode) {
    if( (*parentNode).leftChild == NULL) {
        (*parentNode).leftChild = childNode;
    } else {
        Node* temp = (*parentNode).leftChild;

        while ( (*temp).rightSibling != NULL ) {
            temp = (*temp).rightSibling;
        }

        (*temp).rightSibling = childNode;
    }
}

void printTree(Node* node, int depth) {
    for (int i=0; i<depth-1; i++) {
        printf("   ");
    }

    if( depth > 0) printf("+--");

    printf("%c \n", (*node).data);

    if ( (*node).leftChild != NULL) {
        printTree((*node).leftChild, depth +1);
    }

    if ( (*node).rightSibling != NULL) {
        printTree((*node).rightSibling, depth);
    }
}