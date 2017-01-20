/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose: Write a program that asks the user to enter the month (letting the user enter an integer
  in the range of 1 through 12) and the year. The program should then display the
  number of days in that month. Use the following criteria to identify leap years:

  1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and
  only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
 
  2. If the year is not divisible by 100, then it is a leap year if and if
  only it is divisible by 4. For example, 2008 is a leap year but 2009 is not.
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
    int month,   
            year;
//Input values
    cout<<"Enter a month(1-12):"<<endl;
    cin>>month;
    cout<<"Enter a year:"<<endl;
    cin>>year;
    
//Process by mapping inputs to outputs
    if(month < 1 && month >12){
        cout<<"Invalid month entry, run program again and enter between 1-12"<<endl;
        return 1;
    }
    switch(month){
        case 1:cout<<"There are 31 days in January, "<<year<<endl;
        break;
        case 2: cout<<"There are "<<
                  ((((year%4==0)&&(year%100!=0))||(year%400==0))?"29":"28")<<
                  " days in February, "<<year<<endl;
        break;
        case 3: cout<<"There are 31 days in March, "<<year<<endl;
        break;
        case 4: cout<<"There are 30 days in April, "<<year<<endl;
        break;
        case 5: cout<<"There are 31 days in May, "<<year<<endl;
        break;
        case 6: cout<<"There are 30 days in June, "<<year<<endl;
        break;
        case 7: cout<<"There are 31 days in July, "<<year<<endl;
        break;
        case 8: cout<<"There are 31 days in August, "<<year<<endl;
        break;
        case 9: cout<<"There are 30 days in September, "<<year<<endl;
        break;
        case 10: cout<<"There are 31 days in October, "<<year<<endl;
        break;
        case 11: cout<<"There are 30 days in November, "<<year<<endl;
        break;
        case 12: cout<<"There are 31 days in December, "<<year<<endl;
    }
//Display the Outputs

    //Exit stage right!
    return 0;
}