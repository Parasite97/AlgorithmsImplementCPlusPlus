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

//二分查找 int型数组
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

//欧几里得算法 最大公约数
int EuclidAlgorithm(int m, int n){
    int r;
    if(m < n){
        int temp;
        temp = m;
        m = n;
        n = temp;
    }
    r = m % n;
    cout << "m:" << m << " n:" << n << endl;

    if(r == 0){
        //cout << m << " and " << n << " EuclidNumber is " << n << endl;
        return n;
    }
    else{
        return EuclidAlgorithm(n, r);  
    }
}