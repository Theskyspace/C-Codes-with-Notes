// Find the sum of n naturnal number using fuctions (An efficent one)?
// Concepts used is fuctions and for loops and basic operations


#include <iostream>
using namespace std;

int sum_natural(int n){
    int sum = 0;

    sum = (n*(n+1))/2;

    // This is normal approch.But as the input size increases time will also increase hence not efficient.
    // for(int i = 0 ; i <=n ; i++){
    //     sum = sum + i; 
    // }
    return sum;   

}

int main(){
    int number ;
    cout << "Enter the natural number upto which you want the sum : ";
    cin >> number;

    cout << "The sum of the number upto " << number << " is : " << sum_natural(number) ;
    return 0;
}