#include "basic_tree.h"

int main() {

    Node* root = createNode('B');

    Node* node1 = createNode('A');
    Node* node2 = createNode('F');
    Node* node3 = createNode('G');
    Node* node4 = createNode('D');

    addChildNode(root, node1);
    addChildNode(node1, node2);
    addChildNode(node1, node3);
    addChildNode(node2, node4);

    printTree(root, 0);

    printf("%p", root -> leftChild);
    
    

    return 0;
}