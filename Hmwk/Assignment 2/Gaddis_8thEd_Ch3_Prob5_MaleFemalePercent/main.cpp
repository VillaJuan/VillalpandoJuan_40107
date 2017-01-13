/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 11, 2017, 11:07 AM
  Purpose: Write a program that asks the user for the number of males and the 
 *number of females registered in a class. The program should display the
 *percentage of males and females in the class.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const char PERCENT=100;

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
float nMales,
      nFmales,
      totStdn,
      percMle,
      percFem;

    //Input values
cout<<"This program determines the percent of Males and Females registered in the class."<<endl<<endl;
cout<<"Please enter the number of males in the class followed by the number of Females in the class:"<<endl;
cin>>nMales>>nFmales;

    //Process by mapping inputs to outputs
totStdn= nMales+nFmales;
percMle= nMales/totStdn*PERCENT;
percFem= nFmales/totStdn*PERCENT;

    //Output values
cout<<"The total amount of students in the class is "<<totStdn<<" with "<<percMle<<"% males and "<<percFem<<"% females."<<endl;

    //Exit stage right!
    return 0;
}