/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 11, 2017, 11:07 AM
  Purpose: Write a program that will compute the total sales tax on a $95 purchase. Assume the
           state sales tax is 4 percent and the county sales tax is 2 percent.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const char PERCENT= 100;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float prchase  = 95;
    float stsTax   = 0.04,
            cntyTax= 0.02;
    float totlTax;
    
    //Input values
    
    //Process by mapping inputs to outputs
    totlTax= stsTax+cntyTax*prchase;
    
    //Output values
    cout<<"This program determine the total tax on a purchase of $"<<prchase<<endl;
    cout<<"Using both the State Tax of "<<stsTax<<"% "<<"and County Tax of "<<cntyTax<<"%"<<endl<<endl;
    cout<<"On today's purchase of $"<<prchase<<" Your total taxes are $"<<totlTax<<endl;
    //Exit stage right!
    return 0;
}