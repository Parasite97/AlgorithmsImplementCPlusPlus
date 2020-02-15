//#include <>
#include <iostream>
#include "BaseElement.h"

using namespace std;

#define INT_MAX 1024;

class ExampleSort: public BaseElement{
public:
    void exchangeInt(int &Num1, int &Num2);
    int compableTo(const int &Num1, const int &Num2);
    void showIntArray(int NumArray[], int ArraySize);
    bool isSorted(int NumArray[], int ArraySize);       //If Static in front????

    void selectSort_Array(int *NumArray, int ArraySize);
    List *selectSort_List(List *head);

    void quickSort_Array(int NumArray, int ArraySize);
    void quickSort_List(int, int);

private:

};