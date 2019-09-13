// Simple Contact Manager program
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;

int arraySize = 5;
string nameArray[5] = {""};
string numberArray[5] = {""};
string searchTerm = "";
bool swapped;

//Get data algorithm
void inputData() {
    cout <<"Please enter 3 contact names and numbers. "<<endl;
    for (int i = 0; i < arraySize; i++) {
        cout<<"Please enter a contact name: ";
        cin>>nameArray[i];
        
        cout<<"Please enter a contact number: ";
        cin>>numberArray[i];
    }
}

//Print data algorithm
void printData() {
    cout<<endl;
    for (int i = 0; i < arraySize; i++){
        cout<<setw(2)<< i+1<<"."<<" Name: "<<setw(20)<<nameArray[i]<<" | "<<" Number: "<<setw(15)<<numberArray[i]<<endl;
    }
}    

//Ascending sort algorithm
void sortAscending() {
    do {
        swapped = false;
        for ( int i = 0; i < arraySize - 1; i++ ){
            if ( numberArray[i] > numberArray[i + 1]){
                swap(numberArray[i], numberArray[i + 1]);
                swap(nameArray[i], nameArray[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}    

//Descending sort algorithm
void sortDescending() {
    do {
        swapped = false;
        for ( int i = 0; i < arraySize - 1; i++ ){
            if ( numberArray[i] < numberArray[i + 1]){
                swap(numberArray[i], numberArray[i + 1]);
                swap(nameArray[i], nameArray[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

//Search algorithm
void search() {
    cout << "Enter a name to search for: ";
    cin >> searchTerm;
    for ( int i = 0; i < arraySize - 1; i++ ){
        if ( searchTerm == nameArray[i]){
            cout<<setw(2)<< i+1<<"."<<" Name: "<<setw(20)<<nameArray[i]<<" | "<<" Number: "<<setw(15)<<numberArray[i]<<endl; 
        }
    }
}

//Menu algorithm
int menu(){
    int choice;

    while(1){
        cout << "\n\nPress 1 to input data" << endl;
        cout << "Press 2 to sort data in ascending order" << endl;
        cout << "Press 3 to sort data in descending order" << endl;
        cout << "Press 4 to print all the data" << endl;
        cout << "Press 5 to search for an individual" << endl;
        cout << "Press 6 to end the program" << endl;
        cin >> choice;
        cout << "\n\n" << endl;

        switch (choice){
            case 1:
            cin.ignore();
            inputData();
            break;
            case 2:
            sortAscending();
            case 3:
            sortDescending();
            case 4:
            printData();
            case 5:
            search();
            case 6:
            return 0;
            break;
            default:
            ;
        }
    }
}

int main(){
    
    menu();
    
return 0;
}