// All the content in this folder is from learning of the book (ALC++)
// .cpp is the extension and g++ is compiler.


#include <iostream> // This is how we import libraries in C++
using namespace std; //this is good and can be used to aboid writing STD at every point.


/* #Include directives
In this case we are using a directive as a standard library that is used 
input and output */

// this is how we define the function in C++ and this is nessary to yeild output

int main(){

    //statement goes here.
    // :: --> this is scope operator.
    /*
    Now here is what the like means.
    std is set of commands (called namespace) and cout is one among it.
    and scope of cout has a scope of being in std.
    */

    std::cout << "Namaste, world!" << std::endl;
    
    //using Namespace (6th line)
    cout << "Namaste, world!" << endl;
    
    /* Syntax to print stuff in C++
    std::cout << "Your string" << std::endl(This is not nessary but a good practice); 
    << --> Operators
    and other Operands
    
    */
    
    return 0;  // 0 value indicates the success run of the program.
}

