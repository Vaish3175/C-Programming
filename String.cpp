// String is a collection or group of characters

// var str = "Hello, World!";

// Two ways to cretae string in cpp 
// 1. C-style strings      2. Createing string objects

# include <iostream>
using namespace std;

int main()
{

    string s;

    cout<<"Enter a string";

    getline(cin,s);

    cout<<"You have entered : ";
    cout<<s<<endl;

    s.push_back('Y');     //Add element at the end of string
    cout<<"After using Push_back func "<<s<<endl;

    s.pop_back();
    cout<<"After using pop_back func "<<s<<endl;

    return 0;
}