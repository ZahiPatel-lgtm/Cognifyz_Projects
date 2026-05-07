#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number, guess;
    srand(time(0)); // random number generator
    number = rand() % 100 + 1; // generates a random number between 1 and 100
    cout << "Welcome to the Guessing Game" << endl;
    cout << "Guess the number between 1 and 100: " << endl;
    cin >> guess;
    while (guess != number) {
        if (guess > number) {
            cout << "Too high\nTry again: " << endl;
        } else {
            cout << "Too low\nTry again: " << endl;
        }
        cin >> guess;
    }
    cout << "Congratulations! You guessed the number!" << endl;
}


// Program Description

// This program is a simple number guessing game written in C++. The computer generates a random number between 1 and 100 and the user tries to guess the correct number.
// The program checks the user’s guess and gives hints:

// If the guessed number is greater than the actual number, it displays "Too high"
// If the guessed number is smaller, it displays "Too low"
// If the guess is correct, it displays a success message
// The game continues until the user guesses the correct number.

// Concepts Used

// Random number generation
// Loops (while)
// Conditional statements (if-else)
// Basic input and output