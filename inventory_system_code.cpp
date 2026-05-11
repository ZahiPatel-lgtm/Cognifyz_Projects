#include<iostream>
using namespace std;
class Items{
    private:
    string product;
    int quantity;
    int product_id;

    public:
    void set_item(){
        cout<<"Enter the product name: ";
        cin>>product;
        cout<<"Enter the quantity: ";
        cin>>quantity;
        cout<<"Enter the product id: ";
        cin>>product_id;
    }
    void display_item(){
        cout<<"Product name: "<<product<<endl;
        cout<<"Quantity: "<<quantity<<endl;
        cout<<"Product id: "<<product_id<<endl;
    }

    bool search_ID(int id){
        if(product_id==id){
            return true;
        }
        else{
            return false;
        }
    }
    bool search_name(string name){
        if(product==name){
            return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Items item[100];
    int count=0;
    int choice;
    do{
        cout<<"1. Add item"<<endl;
        cout<<"2. Display items"<<endl;
        cout<<"3. Search by ID"<<endl;
        cout<<"4. Search by name"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1){
            item[count].set_item();
            count++;
        }
        else if(choice==2){
            for(int i=0;i<count;i++){
                item[i].display_item();
            }
        }
        else if(choice==3){
            int id;
            cout<<"Enter the product id to search: ";
            cin>>id;

            bool found=false;
            for(int i=0;i<count;i++){
                if(item[i].search_ID(id)){
                    item[i].display_item();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Item not found!"<<endl;
            }
        }
        else if(choice==4){
            string name;
            cout<<"Enter the product name to search: ";
            cin>>name;

            bool found=false;
            for(int i=0;i<count;i++){
                if(item[i].search_name(name)){
                    item[i].display_item();
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Item not found!"<<endl;
            }
        }
        else if(choice==5){
            cout<<"Exiting the system"<<endl;
        }
        else{
            cout<<"Invalid choice! Please try again."<<endl;
        }
    }
    while(choice!=5);
    return 0;
}
        

// Description

// This program is a simple Inventory Management System written in C++.
// The user can add items with their ID, name and quantity.
// The program also allows the user to display all items
// and search for items by ID or name.
// A menu is used to perform different operations easily.
// The program stores multiple items using an array of objects.

// Concepts Used
// Classes and Objects (OOP Concept)
// Arrays of objects
// Functions
// Loops
// Conditional statements (if-else)
// User input and output