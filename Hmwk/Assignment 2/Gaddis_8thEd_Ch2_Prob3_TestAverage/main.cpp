/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 11, 2017, 11:07 AM
  Purpose: Write a program that asks for five test scores. The program should 
 * calculate the average test score and display it. The number displayed should
 * be formatted in fixed-point notation, with one decimal point of precision.
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
    float score1,
          score2,
          score3,
          score4,
          score5,
          avgScor;
    
    //Input values
    cout<<"This program calculates the average score of 5 tests"<<endl;
    cout<<"Enter five scores between 0 - 100"<<endl;
    cin>>score1>>score2>>score3>>score4>>score5;
    
    //Process by mapping inputs to outputs
    avgScor= (score1+score2+score3+score4+score5)/5;
    
    //Output values
    cout<<"The average score for these 5 tests is "<<avgScor<<endl;
    
    //Exit stage right!
    return 0;
}