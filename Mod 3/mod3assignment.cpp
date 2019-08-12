//Simple Cash Register
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){ //instatiate all the variables needed
    float items[5] = {};
    string condition = "wait";
    float tax = .07;
    float subtotal[5] = {};
    float itemTotal = 0;
    float taxTotal = 0;
    float total = 0;
    
    //The loop that fills the arrays and total variables
    for(int i = 0; i < 5; i++){
        cout << "Enter item price: ";
        cin >> items[i];
        subtotal[i] = (items[i] * tax) + items[i];
        itemTotal = itemTotal + items[i];
        taxTotal = taxTotal + (items[i] * tax);
        total = total + subtotal[i];
    }

    cout << "Item Cost" << setw(18) << "Item Tax" << setw(18) << "Item Subtotal" << endl;
    cout << "----------------------------------------------" << endl;

    //the loop that outputs the item information
    for(int i = 0; i < 5; i++){
        cout << setprecision(2) << fixed;
        
        cout << items[i] << setw(20) << items[i]*tax << setw(20) << subtotal[i] << endl;
    }

    cout << "----------------------------------------------" << endl;
    cout << "Items Total" << setw(18) << "Tax Total" << setw(18) << "Total Due" << endl;
    cout << itemTotal << setw(20) << taxTotal << setw(20) << total;
}