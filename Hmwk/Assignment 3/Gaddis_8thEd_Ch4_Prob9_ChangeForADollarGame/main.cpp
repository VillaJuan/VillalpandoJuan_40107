/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose: Create a change-counting game that gets the user to enter the number
  of coins required to make exactly one dollar. The program should ask the user
  to enter the number of pennies, nickels, dimes, and quarters. If the total
  value of the coins entered is equal to one dollar, the program should
  congratulate the user for winning the game. Otherwise, the program should
  display a message indicating whether the amount entered was more than or less
  than one dollar.
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
float numQuar;//Number of quarters
float numDime;//Number of Dimes
float numNckl;//Number of Nickels
float numPeny;//Number of Pennies
float total;  //Total sum of coins in $'s
    
float penny  = 0.01;//Value of a single penny in cents
float nickel = 0.05;//Value of a single nickel in cents
float dime   = 0.10;//Value of a single dime in cents
float quarter= 0.25;//Value of a single quarter in cents
    
//Input values
cout<<"This is a game that tells you if the change in your pocket equals exactly one dollar."<<endl;
cout<<"Enter the number of quarters, dimes, nickels, and pennies, respectively, in your pocket"<<endl;
cin>>numQuar>>numDime>>numNckl>>numPeny;
    
//Process by mapping inputs to outputs
total= numQuar*quarter+numDime*dime+numNckl*nickel+numPeny*penny;
if (total == 1.00)
    cout<<"Congratulations you have exactly $"<<total<<"!"<<endl;
else if
    (total > 1.00)
            cout<<"Sorry, you don't have exactly $1, you have $"<<total<<endl;
else if
    (total < 1.00)
            cout<<"Sorry, you have less than $1, you have $"<<total<<endl;
//Display the Outputs

    //Exit stage right!
    return 0;
}