#include <iostream>
using namespace std;

// O(n^2) complexity approch  ---> Bubble sorting.(nested loop)



int main(){
    int arr[] = {8,3,4,2,6,11,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j < n-1; j++){
            if (arr[j] < arr[j+1]){   // < --> For decending , > --> for accending
                swap(arr[j],arr[j+1]);
                }
        }
    }

    for(int i = 0; i<n ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}

// This is important. How it works (Process)
// this is unsorted list
// 12 4 2 5 6
// 1 loop outer
// 1 inner
// 4 12 2 5 6
// 4 2 12 5 6
// 4 2 5 12 6
// 4 2 5 6 12
// So you get the Idea.

