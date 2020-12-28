#include <iostream>
// Jump and loops is --> Break and Continue

// This boy is allowed to go out in odd days in the month and he got some money to spend which if cannot go out.


// continue ---> is used to proceed for the next iteration.
// break ---> is to break that iteration of the loop.

int main(){

    int pocket_money = 3000;

    for(int i = 1 ; i < 30 ; i++){
        if (i%2==0){
            continue; // It allows the the loop to continue.
        }
        if(pocket_money==0){
            std::cout << "Paisa Khalas\n";
            break;
        }
        pocket_money = pocket_money-300;
        std::cout << "Go out today, Cause today is : " << i << std::endl;
        
    }   
    return 0;
}