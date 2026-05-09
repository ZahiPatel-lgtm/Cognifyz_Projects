#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    string rev_str="";
    for(int i=str.length()-1;i>=0;i--){
        rev_str+=str[i];
    }
    cout<<"Reversed string: "<<rev_str<<endl;
}

// Description

// This program takes a string as input from the user and reverses the string.
// The reversed string is then displayed on the console.
// A loop is used to read the string characters from the end to the beginning and store them in a new string.

// Concepts Used
// Strings
// Loops
// User input and output
// String length function
// Basic string manipulation