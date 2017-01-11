/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 10, 2017, 11:15 PM
  Purpose:  Sum of Two Numbers
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
int juniorv= 50;    //variable holding the integer 50
int varsity= 100;   //variable holding the integer 100
int total;          //variable holding the value of the sum of both integers
    
    //Input values
    
    //Process by mapping inputs to outputs
total= juniorv+varsity;

    //Output values
cout<<"This program displays two integers using JV and Varsity teams"<<endl;
cout<<"then finds the sum of the points scored by both teams "<<endl<<endl;
cout<<"Points scored by the junior varsity team: "<<juniorv<<endl;
cout<<"Points scored by the varsity team: "<<varsity<<endl<<endl;
cout<<"The sum of the points scored by both teams: "<<total<<endl;
    //Exit stage right!
    return 0;
}