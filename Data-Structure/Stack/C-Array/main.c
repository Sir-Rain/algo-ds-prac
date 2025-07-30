#include "array_stack.h"

int main() {

    ArrayStack* stack = NULL;

    createStack(&stack, 10);

    push(stack, 5);
    push(stack, 1);
    push(stack, 32);
    push(stack, 4);
    push(stack, 7);
    push(stack, 9);

    int tempTop = getStackSize(stack);

    for (int i=0; i<tempTop; i++) {
        printf("%d \n", pop(stack));
    }

    printf("is Empty ? - %d", isEmpty(stack));
}
