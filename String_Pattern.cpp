#include <iostream>
using namespace std;

int main(){
    cout << "Enter the rows and colomns you want to add : ";


    int rows , col;
    cin >> rows >> col;
    cout << "Choose the pattern you want to work with. choose a , b or c : ";
    char choice;
    cin >> choice;

    switch (choice){
        case 'a':
            //Inverted Pyramid
            // **
            // *
            for(int i = rows ; i>=1 ; i--){
                for(int j=1;j<=i;j++){
                    cout << '*';
                }

                cout<< endl;
            }

            break;
        case 'b':
        // Simple String pattern-2.
            // ********
            // *      *
            // *      *
            // *      *
            // ********
            for(int i = 1; i<=rows ; i++){
                for(int j = 1; j<=col ; j++){
                    if (j == 1 or j == col){
                        cout << '*';
                    }
                    else if(i==1 or i == rows){
                        cout << '*';
                    }
                    else{
                        cout << ' '; 
                    }
                }
                cout << endl;
            }

            break;
        case 'c':
         // Simple String pattern-1.
            // ***
            // ***
            for(int i = 1;i <= rows;i++ ){
                for(int j = 1;j <= col;j++ ){
                    cout << '*';
                }
                cout << endl;

            }


            break;


        default:
            break;
    }







   


   
    
    return 0; 
}