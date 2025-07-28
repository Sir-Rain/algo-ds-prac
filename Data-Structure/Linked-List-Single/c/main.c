#include "single.h"

int main() {

    Node* newNode = NULL;
    Node* list = NULL;

    for (int i=10; i<20; i+=2 ) {
        newNode = createNode(i);
        appendNode(&list, newNode);
    }
    
    newNode = NULL;
    newNode = createNode(-1);

    // Head 변환 테스트
    printf("Current Head: %d \n", list -> nodeData);
    insertNewHead(&list, newNode);
    printf("New Head : %d \n", list -> nodeData);
    puts("");


    // 중간 삽입 테스트
    newNode = createNode(22);
    Node* appendPoint = getNodeAt(list, 2);

    insertAfter(appendPoint, newNode);
    

    // 카운트 테스트 
    int count = getNodeCount(list);
    printf("Node Count : %d \n", count);


    for (int i=0; i<count; i++) {
        Node* current = getNodeAt(list, i);

        printf("List Loop[%d]: %d \n",i,  current -> nodeData);
    }

    // 전체 제거


}