#include "circle_queue.h"

int main() {
    ArrayCircleQueue* queue = NULL;

    createQueue(&queue, 10);

    enqueue(queue, 5);
    enqueue(queue, 10);
    enqueue(queue, 7);
    enqueue(queue, 5);
    enqueue(queue, 3);
    enqueue(queue, 4);

    printf("Get Size after enqueue: %d \n", getSize(queue));

    for (int i=0; i<5; i++) {
        printf("Dequeue: %d \n", dequeue(queue));

    }

    printf("IsEmpty: %d \n", isEmpty(queue));

    printf("Dequeue: %d \n", dequeue(queue));

    printf("IsEmpty After Dequeue: %d \n", isEmpty(queue));

    printf("Get Size empty state: %d \n", getSize(queue));
}