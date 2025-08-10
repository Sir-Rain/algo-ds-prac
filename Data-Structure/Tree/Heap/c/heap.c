#include "heap.h"

Heap* createHeap(int initialSize) {
    Heap* newHeap = (Heap*)malloc(sizeof(Heap));

    (*newHeap).nodes = (Node*)malloc(sizeof(Node)* initialSize);
    (*newHeap).capacity = initialSize;
    (*newHeap).usedSize = 0;

    printf("Size of Heap's Nodes %d \n", sizeof((*newHeap).nodes));

    return newHeap;
}
void destroyHeap(Heap* heap) {
    if (heap == NULL) return;

    free((*heap).nodes);
    free(heap);
}
void insert(Heap* heap, NodeData newData) {
    int currentPosition = (*heap).usedSize;
    int parentPosition = getParent(currentPosition);

    if ( currentPosition == (*heap).capacity ) {

        (*heap).capacity *= 2;
        (*heap).nodes = (Node*)realloc((*heap).nodes, (sizeof(Node) * (*heap).capacity));
    }

    (*(((*heap).nodes) + currentPosition)).data = newData;

    while ( currentPosition > 0 &&
        (*(((*heap).nodes) + currentPosition)).data < (*(((*heap).nodes) + parentPosition)).data 
    ) {
        NodeData currentsTemp = (*(((*heap).nodes) + currentPosition)).data;

        swapNodes(heap, currentPosition, parentPosition);

        currentPosition = parentPosition;
        parentPosition = getParent(currentPosition);

    }
}

void deleteMin(Heap* heap, Node* root) {
    int parentPosition = 0;
    int leftPosition = 0;
    int rightPosition = 0;

    memcpy(root, (*heap).nodes, sizeof(Node));
    memset((*heap).nodes, 0, sizeof(Node));

    (*heap).usedSize--;

    swapNodes(heap, 0, (*heap).usedSize);

    leftPosition = getLeftChild(0);
    rightPosition = leftPosition + 1;

    while (1) {
        int selectedChild = 0;

        if (leftPosition >= (*heap).usedSize) break;

        if (rightPosition >= (*heap).usedSize) {
         selectedChild = leftPosition;
        } else {

            if ( (*((*heap).nodes + leftPosition)).data > (*((*heap).nodes + rightPosition)).data ) {
                selectedChild = rightPosition;
            } else {
                selectedChild = leftPosition;
            }

        }

        if ( (*((*heap).nodes + parentPosition)).data > (*((*heap).nodes + selectedChild)).data ) {
            swapNodes(heap, parentPosition, selectedChild);
            parentPosition = selectedChild;
        }else {
            break;
        }

        leftPosition = getLeftChild(parentPosition);
        rightPosition = leftPosition + 1;
    }

    if ( (*heap).usedSize < (*heap).capacity / 2 ) {
            (*heap).capacity /= 2;

            (*heap).nodes = (Node*)realloc((*heap).nodes, sizeof(Node) * (*heap).capacity);
    }
}

int getParent(int index) {
    return (index -1) / 2;
}
int getLeftChild(int index) {
    return (index * 2) + 1;
}

void swapNodes(Heap* heap, int indexF, int indexS) {
    int copySize = sizeof(Node);
    Node* tempNode = (Node*)malloc(copySize);

    memcpy(
        tempNode, 
        ((*heap).nodes) + indexF,
        copySize
    );

    memcpy(
        ((*heap).nodes) + indexF,
        ((*heap).nodes) + indexS,
        copySize
    );

    memcpy(
        ((*heap).nodes) + indexS,
        tempNode,
        copySize
    );

    free(tempNode);
}

void printNodes(Heap* heap) {
    for (int i=0; i< (*heap).usedSize; i++) {
        printf("%d ", (*((*heap).nodes + i)).data );
    }
    puts("");
}