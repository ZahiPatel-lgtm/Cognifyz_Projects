#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of Fibonacci terms to display: ";
    cin>>n;
    int a=0, b=1, next;
    cout<<"Fibonacci Series: ";
    for(int i=0; i<n; i++){
        if(i<=1){
            next=i;
        }
        else{
            next=a+b;
            a=b;
            b=next;
        }
        cout<<next<<" ";
    }
    cout<<endl;
}


// Description

// This program generates the Fibonacci series according to the number of terms entered by the user.
// The Fibonacci series is a sequence where each number is the sum of the two previous numbers.
// The program starts with 0 and 1 and displays the series using a loop.

// Concepts Used
// Loops
// Variables
// User input and output
// Basic arithmetic operations