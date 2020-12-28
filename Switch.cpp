// Switch statements --> It is the efficent alternative for multiple if-else 
// else-if statement.

#include <iostream>
using namespace std;


int main(){
    char button;
    cout << "Enter the character : ";
    cin >> button;
    switch (button)
    {
        case 'a':
            cout << "Hello world \n";
            break;

        case 'b':
            cout << "Namaste world \n";
            break;


    default:
        cout << "None of the choice is selected";
        break;
    }
}


// end. Take Care