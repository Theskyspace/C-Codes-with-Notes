// Don't Just copy the code, Understand it first.
// -- theskyspace(Insta profile also) ;)


//https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm

#include <bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x,y) cout << #x << " = " << x << " , " << #y << " = " << y << endl;


int GCD(int a , int b){
    if (a == 0) return b;
    else if (b == 0) return a;
    else if (b > a) return GCD(b%a , a);
    else if (b < a) return GCD(b , a%b);
    else return a;
    
}






//Driver's code
int main(){ 
    deb(GCD(270,192))
    return 0;
}