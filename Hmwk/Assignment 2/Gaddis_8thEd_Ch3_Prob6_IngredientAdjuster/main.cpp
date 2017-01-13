/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 10:20 PM
  Purpose: A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour
The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, and then displays the
number of cups of each ingredient needed for the specified number of cookies.
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
    float sugar   = .03125,
          butter  = .020833333,
          flour   = .0572916,
          sugrAmt,
          butrAmt,
          flowAmt,
          serving;
            
    //Input values
    cout<<"This program determines how many cups of each ingredient is needed to create the desired amount of cookies."<<endl;
    cout<<"Enter the amount of cookies you would like to bake"<<endl;
    cin>>serving;
    
    //Process by mapping inputs to outputs
    sugrAmt= sugar*serving;
    butrAmt= butter*serving;
    flowAmt= flour*serving;
    
    //Output values
    cout<<"In order to bake "<<serving<<" cookies you need "<<sugrAmt<<" cups, "<<butrAmt<<" cups, and "<<flowAmt<<" cups"<<endl;
    
    //Exit stage right!
    return 0;
}