#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//Standard ways of sortings
//1. Inserstion sort-- easy.
//2. Bubble sort. ---> followed by the inbuild fuction.

// Sorting syntax
// sort(starting point , Ending point , comparison operation(optional));

// It is good to use inbuilt sorting function due to its efficiency.

//Sorting fuction in c++
int main(){
    cout << "This is array." << endl;
    vector<int> v  {4,2,5,3,5,8,3};
    //Sort is the fuction that is used to sort and has a complexity of O(nlogn)
    sort(v.begin(),v.end());
    // This is a beautiful way of iterating through a vector
    for(auto a:v){
        cout << a << " ";
    }

    cout << endl;


    // ----------------------------------------------------------------------
    cout << "This is dict." << endl;
    cout << endl;
    int a[] = {4,2,5,3,5,8,3};
    sort(a, a+7,greater<int>()) ;
    for(int i = 0;i < sizeof(a)/sizeof(a[0]) ; i++ ){
        cout << a[i] << " ";
    }

    cout << endl;



    // ----------------------------------------------------------------------
    cout << "This is string." << endl;
    string s = "akash";
    sort(s.begin(), s.end());
    cout << s;

}