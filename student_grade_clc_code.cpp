#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num_subjects;
    cout<<"Enter the number of subjects: ";
    cin>>num_subjects;
    float grade, total_marks = 0, avg_marks;

    for(int i = 1; i <= num_subjects; i++) {
        cout<<"Enter marks for subject "<<i<<": ";
        cin>>grade;
        if(grade < 0 || grade > 100) {
            cout<<"Invalid marks, Please enter a value between 0 and 100."<<endl;
            return 1;
        }
        total_marks += grade;
    }
    
    avg_marks = total_marks / num_subjects;
    cout<<"Average Marks: "<<avg_marks<<endl;
}


// Description

// This program calculates the average grade of a student using C++.
// The user first enters the number of subjects. Then, the program asks for the grade of each subject one by one. All grades are added together and the average is calculated by dividing the total by the number of subjects.
// Finally, the program displays the average grade on the screen.

// Concepts Used
// Loops (for)
// Arithmetic operations
// Input and output (cin, cout)
// Variables and calculations