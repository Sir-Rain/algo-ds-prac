#include "array_stack.h"

void createStack(ArrayStack **stack , int capacity) {
    (*stack) = (ArrayStack*)malloc(sizeof(ArrayStack));

    (**stack).nodes = (Node*)malloc(sizeof(Node) * capacity);

    (**stack).capacity = capacity;
    (**stack).top = -1;

}

void destroyStack(ArrayStack* stack) {
    free((*stack).nodes);
    
    free(stack);
}

void push(ArrayStack* stack, nodeDT data) {

    if ((*stack).top + 1 >= (*stack).capacity) {
        // OverFlow Error
        return;
    }

    (*stack).top++;
    (*((*stack).nodes + (*stack).top)).data = data;
}

nodeDT pop(ArrayStack* stack) {
    int top = (*stack).top;

    if (top < 0) {
        // UnderFlow
    }

    nodeDT temp;
    
    temp = (*((*stack).nodes + top)).data;

    (*stack).top--;

    return temp;
}
nodeDT top(ArrayStack* stack) {
    int top = (*stack).top;

    nodeDT temp;
    
    temp = (*((*stack).nodes + top)).data;

    return temp;
}

int getStackSize(ArrayStack* stack) {
    return (*stack).top + 1;
}

int isEmpty(ArrayStack *stack) {
    return (*stack).top == -1;
}