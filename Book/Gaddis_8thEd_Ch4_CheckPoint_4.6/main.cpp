/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:05 PM
  Purpose:Write an if statement that performs the following logic: if the
  variable price is greater than 500, then assign 0.2 to the variable discountRate .
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
    float teleVsn,dscRate;
    
    //Input values
    cout<<"Enter the price of a television"<<endl;
    cin>>teleVsn;
    
    //Process by mapping inputs to outputs
    if (teleVsn > 500){
        dscRate = 0.2;
                cout<<"You received a discount of "<<dscRate*100<<"%"<<endl;
    }
    else
        cout<<"Does not qualify for discount"<<endl;
    
    //Output values

    //Exit stage right!
    return 0;
}