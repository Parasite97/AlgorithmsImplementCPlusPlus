#include "BaseElement.h"
#include <stdlib.h>

List *BaseElement::creatList_head(int NumArray[], int NumArraySize){

    //List *head = new List;
    List *head = (List *)malloc(sizeof(List));
    head->next = NULL;

    for (int i = 0; i < NumArraySize; i++){
        
        List *NewNode = (List *)malloc(sizeof(List));
        NewNode->num = NumArray[i];
        NewNode->next = head->next;
        head->next = NewNode;
    }
    return head;
}

List *BaseElement::creatList_tail(int NumArray[], int NumArraySize){                    //Error Num:1
    //List *head = new List;
    List *head = (List *)malloc(sizeof(List));

    List *rear = head;
    for (int i = 0; i < NumArraySize; i++){
        List *NewNode = (List *)malloc(sizeof(List));
        NewNode->num = NumArray[i];
        NewNode->next = NULL;
        rear->next = NewNode;
        rear = NewNode;
    }
    return head;
}

void BaseElement::printList(List *head){
    List *current = head->next;
    int i = 0;
    while(current != NULL){
        printf("List num[%d]: %d", i, current->num);
        current = current->next;
        printf("\t");
        ++i;
    }
    printf("\n");
}

void BaseElement::printArray(int NumArray[], int NumArraySize){
    printf("NumArray:");
    for (int i = 0; i < NumArraySize; i++){
        printf(" %d", NumArray[i]);
    }
    printf("\n");
}

int *BaseElement::creatNumArray(int NumArraySize){
    int *NewNumArray = new int[NumArraySize];
    for (int i = 0; i < NumArraySize; i++){
        NewNumArray[i] = i;
    }
    return NewNumArray;
}

int *BaseElement::creatNumArrayRandom(int NumArraySize){
    int *NewNumArray = new int[NumArraySize];
    for (int i = 0; i < NumArraySize; i++){
        NewNumArray[i] = rand() % 100;
    }
    return NewNumArray;
}

void test(){
    BaseElement p1;
    int NumArraySize = 5;
    p1.NumArray = p1.creatNumArrayRandom(NumArraySize);
    /*
    for (int i = 0; i < NumArraySize; i++){
        NumArray[i] = i;
    }
*/
    for (int j = 0; j < NumArraySize; j++){
        printf("%d ", p1.NumArray[j]);
    }

    
    p1.Head = p1.creatList_tail(p1.NumArray, NumArraySize);

    p1.printList(p1.Head);
}