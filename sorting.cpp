#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Sorting syntax
// sort(starting point , Ending point , comparison operation(optional));

// It is good to use inbuilt sorting function due to its efficiency.

//Sorting fuction in c++
int main(){
    vector<int> v  {4,2,5,3,5,8,3};
    //Sort is the fuction that is used to sort and has a complexity of O(nlogn)
    sort(v.begin(),v.end());
    // This is a beautiful way of iterating through a vector
    for(auto a:v){
        cout << a << " ";
    }
    cout << endl;
    int a[] = {4,2,5,3,5,8,3};
    sort(a, a+7,greater<int>()) ;
    for(int i = 0;i < sizeof(a)/sizeof(a[0]) ; i++ ){
        cout << a[i] << " ";
    }

}