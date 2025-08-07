#include "binary_tree.h"

int main() {
    /**
     *      C
     *    A   F
     *  D  Z B  O
     */
    Node* root = NULL;

    root = createNode('C');

    Node* node1 = createNode('A');
    Node* node2 = createNode('F');
    Node* node3 = createNode('D');
    Node* node4 = createNode('Z');
    Node* node5 = createNode('B');
    Node* node6 = createNode('O');

    (*root).leftChild = node1;
    (*root).rightChild = node2;

    (*node1).leftChild = node3;
    (*node1).rightChild = node4;

    (*node2).leftChild = node5;
    (*node2).rightChild = node6;

    printf("Pre Ordered Print \n");
    preorderPrintTree(root);

    printf("In Ordered Print \n");
    inorderPrintTree(root);

    printf("Post Ordered Print \n");
    postorderPrintTree(root);



    return 0;
}