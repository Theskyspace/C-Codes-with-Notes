// Don't Just copy the code, Understand it first.
// -- theskyspace(Insta profile also) ;)

//The Euclidean Algorithm - To find the GCD of any two value. To know more refer the following link
//https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x,y) cout << #x << " = " << x << " , " << #y << " = " << y << endl;


int GCD(int a , int b){
    if (a == 0) return b;
    else if (b == 0) return a;
    else if (b > a) return GCD(b%a , a);
    else if (b <= a) return GCD(b , a%b);

   return 0;
}






//Driver's code
int main(){ 
    cout << "Enter the number you want to find GCD of : ";
    int a , b;
    cin >> a >> b;
    deb(GCD(a,b))
    return 0;
}