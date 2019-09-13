// Simple Contact Manager program
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
int arraySize = 5;
string nameArray[5] = {""};
string numberArray[5] = {""};
string searchTerm = "";
bool swapped;

cout <<"Please enter 3 contat names and numbers. "<<endl;
   for (int i = 0; i < arraySize; i++) {
       cout<<"Please enter a contact name: ";
       cin>>nameArray[i];
      
       cout<<"Please enter a contact number: ";
       cin>>numberArray[i];
   }
   
    // Write sort algorithm here
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

    // Print the list of users
cout<<endl;
for (int i=0; i <arraySize; i++){
    cout<<setw(2)<< i+1<<"."<<" Name: "<<setw(20)<<nameArray[i]<<" | "<<" Number: "<<setw(15)<<numberArray[i]<<endl;
}
  
   // Write search logic here
cout << "Enter a name to search for: ";
cin >> searchTerm;
for ( int i = 0; i < arraySize - 1; i++ ){
    if ( searchTerm == nameArray[i]){
        cout<<setw(2)<< i+1<<"."<<" Name: "<<setw(20)<<nameArray[i]<<" | "<<" Number: "<<setw(15)<<numberArray[i]<<endl; 
    }
}
return 0;
}