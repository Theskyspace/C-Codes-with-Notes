// Check if the numbers entered is pythagorian triplet.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x,y,z;
    cout << "Enter the number's in descending order : ";
    cin >> x >> y >> z;
    
    if(pow(x,2) == pow(y,2)+pow(z,2)){
        cout << "Its a pythagorian Triplet";
    }
    else{
        cout << "Its not a pythagorian Triplet";
    }

    return 0;
}