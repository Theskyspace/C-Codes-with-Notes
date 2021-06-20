// Don't Just copy the code, Understand it first.
// -- theskyspace(Insta profile also) ;)

#include <bits/stdc++.h>
using namespace std;


//What are arrays --> it's collection of entites of similar datatypes all packed up with a name.

int main(){
    cout << "enter the size of array : " ;
    int arraysize;
    cin >> arraysize;

    int a[arraysize];

    // 5 --> 4 5 2 6 15
    // To take the input of array in reverse order
    
    for(int i = arraysize-1; i >= 0 ; i--)
    {
        cin >> a[i];
    }

    
    cout << "This is your array reversed : " << endl;
    
    //To print the array.
    for (int i = 0; i < arraysize; i++)
    {
        cout << a[i] << ' ';
    }

    cout << endl;

    int b , position;
    cout << "enter the number and position" << endl;
    cin >> b >> position;


    int temp[arraysize+1];

// 3 1
// 1 3


    int j = 0;
    for (int i = 0; i <= arraysize; i++)
    {
        if (i == position)
        {
            temp[i] = b;
            continue;
        }
        temp[i] = a[j];
        j++;
    }

    cout << "this is your required array : " << endl;

    for (int i = 0; i <= arraysize; i++)
    {
        cout << temp[i] << ' ';
    }


    
    
    
    


    return 0;
}