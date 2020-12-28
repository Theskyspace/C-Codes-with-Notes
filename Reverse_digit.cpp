#include <iostream>
using namespace std;

int main(){
    int a;
    int last_digit;
    int reverse = 0;
    
    cout << "Enter the number you want to reverse : " ;
    cin >> a;
    
    while(a>0){
        last_digit = a % 10;
        reverse = reverse*10 + last_digit;
        a = a/10;
    }


    cout << reverse << endl;
    return 0;
}