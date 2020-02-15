#include "SortAlgorithm.h"

void ExampleSort::exchangeInt(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int ExampleSort::compableTo(const int &num1, const int &num2)
{
    if (num1 > num2)
        return 1;
    else if (num1 == num2)
        return 0;
    else
        return -1;
}

void ExampleSort::showIntArray(int a[], int ArraySize)
{
    cout << "Array item:" << endl;
    for (int i = 0; i < ArraySize; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

bool ExampleSort::isSorted(int NumArray[], int ArraySize)
{
    for (int i = 1; i <= ArraySize; i++)
    {
        if (NumArray[i] < NumArray[i - 1])
            return false;
    }
    return true;
}

void ExampleSort::selectSort_Array(int *NumArray, int ArraySize)
{

    for (int i = 0; i < ArraySize; i++)
    {
        int temp = INT_MAX;
        int nim = 0;
        for (int j = i; j < ArraySize; j++)
        {
            if (NumArray[j] < temp)
            {
                temp = NumArray[j];
                nim = j;
            }
        }
        printf("%d ", temp);
        exchangeInt(NumArray[i], NumArray[nim]);
    }
}

List *ExampleSort::selectSort_List(List *head)
{
    List *NewList = new List;                                   //Creat a new List
    List *rear = NewList;                                       //The new List current

    List *pre = head;                                           //The pre of old List
    List *current = head->next;                                 //The current of old List

    while (current){                                            //Cycle
        int temp = INT_MAX;
        List *preTempList;                                      //The pre of choose
        List *TempList;                                         //The current of choose


        while (current != NULL){                                //Find the minium in non-select
            if (current->num < temp){
                temp = current->num;
                preTempList = pre;
                TempList = current;
            }
            pre = pre->next;
            current = current->next;
        }
        
        preTempList->next = TempList->next;                     //Delete from old List
       
        rear->next = TempList;                                  //Add to new List
        rear = rear->next;
        rear->next = NULL;

        pre = head;
        current = pre->next;
    }
    delete head;                                                //Delete Old List Space
    
    return NewList;                                             //Return new List
}