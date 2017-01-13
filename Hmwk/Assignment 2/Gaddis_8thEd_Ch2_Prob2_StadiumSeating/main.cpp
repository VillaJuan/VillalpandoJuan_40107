/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 7:54 PM
  Purpose:  There are three seating categories at a stadium. For a softball game
 * Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9.
 * Write a program that asks how many tickets for each class of seats were sold,
 * then displays the amount of income generated from ticket sales. Format your
 * dollar amount in fixed-point notation, with two decimal places of precision,
 * and be sure the decimal point is always displayed.
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
    float classA= 15.00,
          classB= 12.00,
          classC=  9.00,
          txSoldA,
          txSoldB,
          txSoldC,
          totlRev;
            
    //Input values
    cout<<"This program displays the amount of income generated from ticket sales"<<endl;
    cout<<"Class A seats cost $15.00, Class B seats cost $12.00, and Class C seats cost $9.00."<<endl<<endl;
    cout<<"Please enter the amount of each type of ticket sold. i.e. 7 19 33"<<endl;
    cin>>txSoldA>>txSoldB>>txSoldC;
    
    //Process by mapping inputs to outputs
    totlRev= txSoldA*classA+txSoldB*classB+txSoldC*classC;
    
    //Output values
    cout<<"The income generated from the sales of all tickets is $"<<setprecision(2)<<fixed<<totlRev<<endl;
    
    //Exit stage right!
    return 0;
}