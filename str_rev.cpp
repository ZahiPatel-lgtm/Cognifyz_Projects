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