#include "BaseAlgorithm.h"
#include <iostream>
#include <string>
using namespace std;

int *InputOneDimensionArray(){
    cout << "Please input your want array:" << endl;
    cout << "Arrary size:";
    int arrarySize;
    cin >> arrarySize;

    int *array = new int(arrarySize);                     //开辟一个大小为arraySize的数组

    cout << "Please input array num:";
    for (int i = 0; i < arrarySize; i++){
        cin >> array[i];
    }

    return array;
}

int BinarySearchAlgorithmInt(int a[], int length, int num){
    int low = 0;
    int high = length;
    int mid = (low + high) / 2;
    while(num != a[mid]){
        if(num < a[mid])
            high = mid - 1;

        else if(num > a[mid])
            low = mid + 1;

        mid = (low + high) / 2;
    }
    if(num == a[mid]){
        cout << "Search successful! Search position:" << mid << endl;
        return mid;
    }
        
    else{
        cout << "Search failed!" << endl;
        return 0;
    }
}