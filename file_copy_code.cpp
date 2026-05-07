#include<bits/stdc++.h>
using namespace std;
int main()
{
    string source, destination;
    string data;
    cout<<"Enter source file name: ";
    cin>>source;
    cout<<"Enter destination file name: ";
    cin>>destination;
    ifstream src(source);
    if(!src) {
        cout<<"Error: Could not open source file!"<<endl;
        return 1;
    }
    ofstream dest(destination);
    if(!dest) {
        cout<<"Error: Could not open destination file!"<<endl;
        return 1;
    }
    while(getline(src, data)) {
        dest << data << endl;
    }
    cout<<"File copied successfully"<<endl;
    src.close();
    dest.close();
}


// Description

// This program copies the contents of one file to another using C++ file handling.

// The user enters:
// Source file name
// Destination file name

// The program opens the source file, reads its contents line by line and writes them into the destination file.
// If the source file does not exist, the program displays an error message.

// Concepts Used
// File handling (ifstream, ofstream)
// Loops (while)
// Input and output
// String handling