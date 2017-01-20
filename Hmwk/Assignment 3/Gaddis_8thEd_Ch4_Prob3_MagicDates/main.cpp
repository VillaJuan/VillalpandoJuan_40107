/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose: The date June 10, 1960 is special because when we write it in the 
  following format, the month times the day equals the year.
    6/10/60
Write a program that asks the user to enter a month (in numeric form), a day
and a two-digit year. The program should then determine whether the month times
the day is equal to the year. If so, it should display a message saying the date
is magic. Otherwise it should display a message saying the date is not magic.
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
int month,day,year;//variables to hold a date entered by the user
int magical;       //Determines if the user entered date is magical

//Input values
cout<<"Please enter a date in starting with the month, day, and two-digit year to determine if the date is magical."<<endl;
cin>>month>>day>>year;

//Process by mapping inputs to outputs
magical= (month*day);

//Display the Outputs
if (magical==year)
    cout<<"This is a magical date"<<endl;
else 
    cout<<"This is not a magical date"<<endl;

    //Exit stage right!
    return 0;
}