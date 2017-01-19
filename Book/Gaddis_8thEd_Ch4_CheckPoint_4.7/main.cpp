/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:05 PM
  Purpose:  Write an if statement that multiplies payRate by
  1.5 if hours is greater than 40.
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
int main(int argc, char** argv){
    //Declare Variables 
    float payRate= 10.00, hrsWrkd, grosPay, ovrTime;
    
    //Input values
    cout<<"Enter number of hours worked"<<endl;
    cin>>hrsWrkd;
    
    //Process by mapping inputs to outputs
    grosPay= payRate*hrsWrkd;
    if (hrsWrkd > 40){
        grosPay+=0.5*payRate*(hrsWrkd-40);
    }
    //Output the results
    cout<<"Your gross pay is $"<<grosPay<<endl;
    
    //Exit stage right!
    return 0;
}