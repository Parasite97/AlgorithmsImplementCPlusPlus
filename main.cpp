#include <iostream>
#include "BaseAlgorithm.h"
using namespace std;


int main(){
    cout << "hello!" << endl;
    int *a;
    a = InputOneDimensionArray();
    int num;

    num = BinarySearchAlgorithmInt(a, 6, 20);
    
    return 0;
}