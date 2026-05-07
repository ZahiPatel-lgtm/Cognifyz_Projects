#include<iostream>
using namespace std;
int main()
{
    string word, rev;
    cout<<"Enter a Word: ";
    cin>>word;
   for (int i = word.length() - 1; i >= 0; i--) {
        rev = rev + word[i];
    }
    if(word == rev)
        cout<<"The word is a palindrome.";
    else
        cout<<"The word is not a palindrome.";
}


// Description

// This program checks whether a word is a palindrome or not. A palindrome is a word that reads the same forward and backward, such as madam or level.
// The program takes a word as input from the user and reverses it using a loop. Then it compares the original word with the reversed word.

// If both are the same, the program displays "It is a palindrome."
// Otherwise, it displays "It is not a palindrome."

// Concepts Used
// Strings
// Loops (for)
// Conditional statements (if-else)
// Basic input and output