/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 8:05 PM
  Purpose: Many financial experts advise that property owners should insure
 *their homes or buildings for at least 80 percent of the amount it would cost
 *to replace the structure. Write a program that asks the user to enter the
 *replacement cost of a building and then displays the minimum amount of
 *insurance he or she should buy for the property.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    float repCost,
            minInsr;
    //Input values
    cout<<"This program demonstrates the minimum amount of"<<endl;
    cout<<"insurance recommended to replace a structure."<<endl<<endl;
    cout<<"Enter the cost of replacing your structure"<<endl;
    cin>>repCost;
    
    //Process by mapping inputs to outputs
    minInsr = repCost*.8;
    
    //Output values
    cout<<"Minimum Insurance recommended to protect your structure is: $"<<minInsr<<endl;
    
    //Exit stage right!
    return 0;
}