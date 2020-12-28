#include <iostream>

int main(){

    int money;
    std::cout << "Enter the amount of cash you have: ";
    std::cin >> money;


    //If-else and else if statements starts here.
    // Nested if else also works.
    
    if(money>1000){
        std::cout << "Money is greater than 1000 ";
    }
    else if (money>500){
        std::cout << "Money is greater than 500 ";
    }

    else{
        std::cout << "You have no";
    }

    // Fun fact : The last statement satisfied will give the required print.
    
    return 0;

}