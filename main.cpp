#include <iostream>
#include "BaseAlgorithm.h"
//#include "BaseElement.h"
#include "SortAlgorithm.h"
using namespace std;


int main(){
    //BaseElement Element1;
    ExampleSort ExampleSort1;

    int NumArraySize = 5;
    ExampleSort1.NumArray =  ExampleSort1.creatNumArrayRandom(NumArraySize);
    ExampleSort1.printArray(ExampleSort1.NumArray, NumArraySize);

    ExampleSort1.Head = ExampleSort1.creatList_tail(ExampleSort1.NumArray, NumArraySize);
    ExampleSort1.printList(ExampleSort1.Head);

    ExampleSort1.Head =  ExampleSort1.selectSort_List(ExampleSort1.Head);

    printf("\n");
   ExampleSort1.printList(ExampleSort1.Head);

    return 0;
}