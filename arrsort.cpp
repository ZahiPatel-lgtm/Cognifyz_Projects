#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,choice,temp;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"1. Sort in ascending order"<<endl;
    cout<<"2. Sort in descending order"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==1){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"Sorted array in ascending order: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else if(choice==2){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]<arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"Sorted array in descending order: ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
}


// Description

// This program sorts an array of integers in ascending or descending order.
// The user enters the array elements and chooses the sorting order.
// The program then arranges the elements using
// a simple sorting technique and displays
// the sorted array.

// Concepts Used
// Arrays
// Loops
// Conditional statements (if-else)
// User input and output
// Basic sorting logic