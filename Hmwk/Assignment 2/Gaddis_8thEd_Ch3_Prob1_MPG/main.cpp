/* 
 * File:   main.cpp
 * Author: Juan Villalpando
 * Created on January 12, 2016, 1:02 PM
 * Purpose:  Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short numGall;
    unsigned short numMile;
    unsigned short mpg;
    
    //Input or initialize values Here
    cout<<"This Program determines the amount of miles"<<endl;
    cout<<"that a vehicle can travel per gallon based on"<<endl;
    cout<<"how many gallons of gas the vehicle can hold."<<endl<<endl;
    cout<<"Please enter the number of gallons the vehicle can hold"<<endl;
    cin>>numGall;
    cout<<"Now enter the number of miles the vehicle can be driven on a full tank"<<endl;
    cin>>numMile;
    
    //Process/Calculations Here
    mpg= numMile/numGall;
    //Output Located Here
    cout<<"This vehicle can drive at "<<mpg<<" Miles Per Gallon"<<endl;

    //Exit
    return 0;
}

