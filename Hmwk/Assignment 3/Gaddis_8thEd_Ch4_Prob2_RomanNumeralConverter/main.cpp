/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose:  Write a program that asks the user to enter a number within the 
  range of 1 through 10. Use a switch statement to display the Roman numeral
  version of that number. 
 * Input Validation: Do not accept a number less than 1 or greater than 10.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
//Declare Variables
    int number;
    
//Input values
    cout<<"This program displays a Roman Numeral corresponding with a number between 1 and 10."<<endl;
    cout<<"Please enter any whole number from 1 to 10"<<endl;
    cin>>number;
    
//Process by mapping inputs to outputs

//Display the Outputs
    switch (number){
        case 1:cout<<"I"<<endl;
        break;
        case 2:cout<<"II"<<endl;
        break;
        case 3:cout<<"III"<<endl;
        break;
        case 4:cout<<"IV"<<endl;
        break;
        case 5:cout<<"V"<<endl;
        break;
        case 6:cout<<"VI"<<endl;
        break;
        case 7:cout<<"VII"<<endl;
        break;
        case 8:cout<<"VIII"<<endl;
        break;
        case 9:cout<<"IX"<<endl;
        break;
        case 10:cout<<"X"<<endl;
        break;
        default:cout<<"You did not enter a number between 1 and 10, please run program and try again"<<endl;
    }
    //Exit stage right!
    return 0;
}