//Nested If statements for an automated car to turn
#include <iostream>
#include <string>

using namespace std;

int main(){
    char lightColor = 'n';
    char oncomingTraffic = 'y';
    char turnSignal = 'n';
    char condition = 'n';
    //While loop to keep the loop going if conditions arent met
    while (condition == 'n')
    {
        cout << "Is the light color green? "; //Check to see if light is green
        cin >> lightColor;
        if (lightColor == 'y'){ //if light is green, do this
            cout << "Light is green" << endl;
            cout << "Is there any oncoming traffic? "; //check to see if 
                                                       //there is traffic
            cin >> oncomingTraffic;
            if (oncomingTraffic == 'n'){ //if there is no traffic, do this
                cout << "There is no traffic." << endl;
                cout << "Is the turn signal on? "; //check the turn signal
                cin >> turnSignal;
                if (turnSignal == 'y'){ //if the turn signal is on, do this
                    cout << "The turn signal is on." << endl;
                    cout << "The car goes.";
                    condition = 'y';
            //else statements restart the loop if conditions arent right to go
                } else {
                    cout << "Turn the turn signal on." << endl;
                }
            } else {
                cout << "Wait for the traffic to pass." << endl;
            }
        } else {
            cout << "Wait for the light to turn to green." << endl;
        }
    }
}