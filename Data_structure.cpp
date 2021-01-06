#include <iostream>
#include <vector>

using namespace std;
//Dyanamic arrays : These are the arrays which are mutable in nature.

int main(){
    //--------------------------------------------------------------
    //How to define them
    vector <int> v;

    //how to add elements.
    v.push_back(3);
    v.push_back(5);

    //how to pop the last element from the list.
    v.pop_back();

    //   To display the elements of array.
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
        }

    //-------------------------------------------
    // String as a DS

    string a = "akash";
    string b = a+a; //note : there is no multiplication in string fuction

    // multiplication alternative
    string c;
    for(int i = 0 ; i <= 10 ; i++){
        c += a;
    }

    cout << b << " " << c;


    return 0;
}