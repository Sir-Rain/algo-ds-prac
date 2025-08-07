#include "binary_tree.h"

Node* createNode(NodeData data) {
    Node* newNode = (Node*)malloc(sizeof(Node));

    (*newNode).data = data;
    (*newNode).rightChild = NULL;
    (*newNode).leftChild = NULL;

    return newNode;
}
void destroyNode(Node* node) {
    if (node == NULL) return;

    free(node);
}
void destroyTree(Node* root) {
    if ( root == NULL) return;

    if( (*root).leftChild != NULL) {
        destroyTree(( (*root).leftChild ));
    }

    if( (*root).rightChild != NULL) {
        destroyTree(( (*root).rightChild ));
    }

    destroyNode(root);
}

void preorderPrintTree(Node* node) {
    if (node == NULL) {
        return;
    }

    printf("%c \n", (*node).data);

    preorderPrintTree((*node).leftChild);
    preorderPrintTree((*node).rightChild);
}
void inorderPrintTree(Node* node) {
    if (node == NULL) {
        return;
    }

    preorderPrintTree((*node).leftChild);

    printf("%c \n", (*node).data);
    preorderPrintTree((*node).rightChild);
}
void postorderPrintTree(Node* node) {
    if (node == NULL) {
        return;
    }

    preorderPrintTree((*node).leftChild);

    preorderPrintTree((*node).rightChild);

    printf("%c \n", (*node).data);
}