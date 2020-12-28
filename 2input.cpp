#include <iostream>
using namespace std;


int main(){

    cout << "Carry out differnet operations with two numbers. \n" ;

    // >> this is extraction operator
    // << inserstion operator (used in 1 tutorial)
    int a;
    cout << "Enter the value in a (First) : " ;
    cin >> a;

    int b;  
    cout << "Enter the value in b (Second) : ";
    // c_in is a method of taking a input in C++
    cin >> b;

    // This is kinda different print statement which is important.
    cout << "the Sum is : " << a+b << endl;
    cout << "the Subtraction is : " << a-b << endl;
    cout << "the Multiplication is : " << a*b << endl;
    cout << "the Division is : " << a/b << endl;
    // Returns the division remainder
    cout << "the Modulus is : " << a%b << endl;
    // Increment the value of a
    a++;
    cout << "the Increment is (a) : " << a << endl;
    // Decrement the value of b
    b--;
    cout << "the Decrement (b) is : " << b << endl;
    

    return 0;
}
