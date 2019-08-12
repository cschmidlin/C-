//Simple Geometric Calculator Program
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int sideOne = 3;
    int sideTwo = 4;
    int area = 0;

    area = (sideOne * sideTwo)/2;  //Logic for calcuation the area

    cout <<"The sides of the triangle measure "<<sideOne<<" and "<<sideTwo<<"."<<" The area is "<<area<<"."<<endl;

    //Setting the double variables to 0
    double side1 = 0;
    double side2 = 0;
    double area2 = 0;

    //Setting the doubles to the int variables times 5
    side1 = sideOne * 5;
    side2 = sideTwo * 5;
    area2 = (side1 * side2)/2;

    //Setting the precision of the decimals to one place
    cout << fixed << setprecision(1);
    cout << "The sides of the triangle measure "<< side1 << " and "<< side2 << ". The area is " << area2 << "." << endl;

    return 0;
}