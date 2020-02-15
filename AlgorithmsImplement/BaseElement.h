//#include
#include <iostream>

typedef struct Node{
    int num;
    struct Node *next;
} List;

class BaseElement{
public:
    List *Head;
    int *NumArray;
    List *creatList_head(int NumArray[],int NumArraySize);
    List *creatList_tail(int NumArray[],int NumArraySize);
    void printList(List *head);
    void printArray(int NumArray[], int NumArraySize);
    int *creatNumArray(int NumArraySize);
    int *creatNumArrayRandom(int NumArraySize);

private:
};

void test();