// Don't Just copy the code, Understand it first.
// -- theskyspace ;)

#include <bits/stdc++.h>
using namespace std;


int main(){
    
    //Let's start
    stack <int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    if(s.empty() == true){
        cout <<"Its empty" << endl;
    }
    else{
        cout << "Its not empty." ;
    }

    return 0;
}