#include <iostream>
using namespace std;

int main(){
    // Defining of an array
    int arr1[] = {1,4,3,9,103,4,3};
    
    // It calculates on the basis of the bit size.And hence we find the total bits used and divide it by each bit size(ie:4) for int.

    int arrSize = sizeof(arr1)/sizeof(arr1[0]);
    cout << arrSize << "  " <<sizeof(arr1)<< " " << sizeof(arr1[4]);
    return 0;
}