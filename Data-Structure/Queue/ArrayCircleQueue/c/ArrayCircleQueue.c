#include "ArrayCircleQueue.h"

void createQueue(ArrayCircleQueue** queue, int capacity) {
    (*queue) = (ArrayCircleQueue*)malloc(sizeof(ArrayCircleQueue));

    (*(*queue)).nodes = (Node*)malloc(sizeof(Node) * (capacity + 1));

    (*(*queue)).capacity = capacity;
    (*(*queue)).front = 0;
    (*(*queue)).rear = 0;
}

void destroyQueue(ArrayCircleQueue* queue) {
    free((*queue).nodes);

    free(queue);
}

/** 
    To-do 모듈로 연산을 이용한 포인터 초기화
*/
void enqueue(ArrayCircleQueue* queue, NodeData data) {
    int position = 0;

    if ((*queue).rear == (*queue).capacity) {
        position = (*queue).rear;
        (*queue).rear = 0;
    } else {
        position = (*queue).rear++;

        (*(((*queue).nodes) + position)).data = data;
    }
}

NodeData dequeue(ArrayCircleQueue* queue) {
    int position = (*queue).front;

    if ((*queue).front == (*queue).capacity) {
        (*queue).front = 0;
    }else {
        (*queue).front++;
    }

    return (*(((*queue).nodes) + position)).data;
}

int getSize(ArrayCircleQueue* queue) {
    if( (*queue).front <= (*queue).rear ) {
        return (*queue).rear - (*queue).front;
    }else {
        return (*queue).rear + ((*queue).capacity - (*queue).front) +1 ;
    }
}

int isEmpty(ArrayCircleQueue* queue) {
    return (*queue).rear == (*queue).front;
}

int isFull(ArrayCircleQueue* queue) {
    if( (*queue).front < (*queue).rear ) {
        return (*queue).rear - (*queue).front == (*queue).capacity;
    }else {
        (*queue).rear + 1 == (*queue).front;
    }
}
