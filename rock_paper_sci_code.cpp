#include<bits/stdc++.h>
using namespace std;
int main()
{
    int user_choice, computer_choice;
    srand(time(0)); // random number generator
    computer_choice = rand() % 3 + 1; // generates a random number between 1 and 3
    cout << "Welcome to Rock, Paper, Scissors Game!" << endl;
    cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> user_choice;
    if (user_choice < 1 || user_choice > 3) {
        cout << "Invalid choice! Please enter 1, 2 or 3." << endl;
        return 1;
    }
    cout << "Computer chose: " << (computer_choice == 1 ? "Rock" : computer_choice == 2 ? "Paper" : "Scissors") << endl;
    if (user_choice == computer_choice) {
        cout << "It's a tie game!" << endl;
    } else if ((user_choice == 1 && computer_choice == 3) || 
               (user_choice == 2 && computer_choice == 1) || 
               (user_choice == 3 && computer_choice == 2)) {
        cout << "Congratulations! You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

}

// Description

// This program is a simple Rock-Paper-Scissors game written in C++. The user selects either rock, paper or scissors and the computer generates a random choice.
// The program compares both choices using the game rules:
// Rock beats Scissors
// Scissors beats Paper
// Paper beats Rock
// After comparing the choices, the program displays whether the user wins, the computer wins or the match is a draw.

// Concepts Used
// Random number generation (rand())
// Conditional statements (if-else)
// Input and output
// Basic game logic