/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:45 PM
  Purpose: The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based
 *on the total weight of the pallet. The program should ask the user how much
 *the pallet weighs by itself and with the widgets stacked on it. It should then
 *calculate and display the number of widgets stacked on the pallet.
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
    float          widget = 12.50,
                   ePallet,
                   sPallet;
    unsigned short nWidget;
    
    //Input values
    cout<<"This program calculates how many widgets are stacked on a pallet"<<endl;
    cout<<"Based on the weight of an empty pallet, and one stacked with widgets"<<endl<<endl;
    cout<<"Enter the weight of an empty pallet"<<endl;
    cin>>ePallet;
    cout<<"Enter the weight of a pallet stacked with widgets"<<endl;
    cin>>sPallet;
    
    //Process by mapping inputs to outputs
    nWidget= (sPallet-ePallet)/widget;
    
    //Output values
    cout<<"The number of widgets stacked on the pallet is "<<nWidget<<endl;
    
    //Exit stage right!
    return 0;
}