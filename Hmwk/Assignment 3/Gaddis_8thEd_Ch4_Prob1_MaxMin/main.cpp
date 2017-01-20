/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:05 PM
  Purpose:  Write a program that asks the user to enter two numbers. The program
  should use the conditional operator to determine which number is
  the smaller and which is the larger.
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
float boxOne, //measurement provided by user for container one
      boxTwo, //measurement provided by user for container two
      largest;//The container with the most volume
    
    //Input values
    cout<<"This program asks the user to enter the volume for two separate containers."<<endl;
    cout<<"Then, the program decides which container is the largest."<<endl<<endl;
    cout<<"What size are the first and second containers, respectively?"<<endl;
    cin>>boxOne>>boxTwo;
    
    //Process by mapping inputs to outputs
    largest = boxOne > boxTwo ? boxOne : boxTwo;
    
    //Output values
    cout<<"The container with the greatest volume is container "<<largest<<endl;
    
    //Exit stage right!
    return 0;
}