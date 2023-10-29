/* Functions are blocks of code that are designed to perform a particular task

 SYNTAX   return_type function_name(parameter1, parameter2,......)       // FUNCTION DECLARATION
 //         {
 //         // function body
 //         }

 Types  1. Built-in functions      2. User-defined functions 

 Built-in functions - also called pre-defined functions / library functions
 //                     these func are placed in header files of c++ e.g. <cmath>, <string>

 User-defined functions - these functions are created by user
 //                         e.g. void club()
 //                              {
 //                               }
 //                              int main()
 //                              {
 //                               club();                                  // FUNCTION CALLING
 //                               }                                           function_name(arguments)

Call by value
When we pass an argument to the function, it creates a copy of the actual variable and passes this copy to the 
function.
Any change inside the function is not not refecyed outside the function.

Call by reference
In this method the address of the variable is passed in the function
and any changes made inside the function will be reflected outside the function as well.
*/

// Call by value
#include<iostream>
using namespace std;

void Salary_change(int s)
{
    s = 30000;
    cout << "Value inside function "<<s<<endl;
}
int main()
{
    int sal = 27000;
    Salary_change(sal);
    cout << "Value inside main "<< sal <<endl;
    return 0;
}

//Call by reference
#include<iostream>
using namespace std;

void Increment(int &s)
{
    s = s + 5000;
    cout << "Value inside function "<<s<<endl;
}
int main()
{
    int sal = 27000;
    Increment(sal);
    cout << "Value inside main "<< sal <<endl;
    return 0;
}
