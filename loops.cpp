// Loops increase simplicity of the program and provide code reusability.
// Loops are required to execute several lines of code into fewer lines.

// A loop is a series of instructions that are progressively repeated until a certain condition is met.
// Loops allow us to inform the computer from where to start and provide a condition on which to stop.

// Types
// 1. for ---> used when we want to iterate through an array using a start index, end index.
// 2. while ---> used when repition of a statement is required based on a certain boolean condition.
// 3. do-while ---> same as while but, it tests the condition at the end of the loop body.
// 4. nested ---> used when repition of statement is required which depends on repition of another statement.


// Printing numbers from 0 to 10 (FOR LOOP)
#include <iostream>
using namespace std;

int main()
{
    for(int i=0; i<=10; i++)
    {
        cout<<i<<endl;
    }
    return 0;
}

// Print Happy new year 11 times (WHILE LOOP)
#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    while(n!=11)
    {
        cout<<"Happy New Year"<<endl;
        n++;
    }
    return 0;
}

// (DO-WHILE LOOP) Print star pattern of half pyramid form using nested loop
# include<iostream>
using namespace std;

int main()
{
    int i;
    int j;
    for(i=1; i<=10; i++)
    {
        cout<<"\n";
        for(j=1; j<=i; j++)
        cout<<"*";
    }
    return 0;
}