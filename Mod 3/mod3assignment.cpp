//Simple Cash Register
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//instatiate all the variables needed
float items[5] = {};
string condition = "wait";
float tax = .07;
float subtotal[5] = {};
float itemTotal = 0;
float taxTotal = 0;
float total = 0;

//The loop that fills the arrays and total variables
void fillArray(){
    for(int i = 0; i < 5; i++){
        cout << "Enter item price: ";
        cin >> items[i];
        subtotal[i] = (items[i] * tax) + items[i];
        itemTotal = itemTotal + items[i];
        taxTotal = taxTotal + (items[i] * tax);
        total = total + subtotal[i];
    }
}

//Output the information
void output(){
    cout << "Item Cost" << "\t\t" << "Item Tax" << "\t\t" << "Item Subtotal" << endl;
    cout << "--------------------------------------------------------------" << endl;

    //the loop that outputs the item information
    for(int i = 0; i < 5; i++){
        //cout << setprecision(2) << fixed;
        
        cout << items[i] << "\t\t\t" << items[i]*tax << "\t\t\t" << subtotal[i] << endl;
    }

    cout << "--------------------------------------------------------------" << endl;
    cout << "Items Total" << "\t\t" << "Tax Total" << "\t\t" << "Total Due" << endl;
    cout << itemTotal << "\t\t\t" << taxTotal << "\t\t\t" << total;
}


int main(){ 
    fillArray();
    output();
}