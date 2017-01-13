/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 11, 2017, 11:07 AM
  Purpose: Write a program that calculates the average rainfall for three months.
 * The program should ask the user to enter the name of each month, such as June
 * or July, and the amount of rain (in inches) that fell each month. The program
 * should display a message similar to the following:
The average rainfall for June, July, and August is 6.72 inches.
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
    string month0,
          month1,
          month2;
    float rainMo0,
          rainMo1,
          rainMo2,
          avgRain;
    
    //Input values
   cout<<"In order to display the average rainfall for any three months"<<endl;
   cout<<"Please enter the names of any three months"<<endl;
   cin>>month0>>month1>>month2;
   cout<<"Then enter the amount of rainfall for each month in inches"<<endl;
   cin>>rainMo0>>rainMo1>>rainMo2;
   
    //Process by mapping inputs to outputs
avgRain= (rainMo0+rainMo1+rainMo2)/3.00;  

    //Output values
cout<<"The average rainfall for "<<month0<<", "<<month1<<", "<<month2<<" is "<<avgRain<<endl;
        
    //Exit stage right!
    return 0;
}