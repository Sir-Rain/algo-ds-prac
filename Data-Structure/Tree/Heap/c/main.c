#include "heap.h"

int main() {

    Heap* heap = createHeap(10);

    Node minNode;

    insert(heap, 5);
    insert(heap, 3);
    insert(heap, 11);
    insert(heap, 24);
    insert(heap, 59);
    insert(heap, 1);

    printNodes(heap);
    
    deleteMin(heap, &minNode);
    printNodes(heap);

    deleteMin(heap, &minNode);
    printNodes(heap);

    deleteMin(heap, &minNode);
    printNodes(heap);

    return 0;
}