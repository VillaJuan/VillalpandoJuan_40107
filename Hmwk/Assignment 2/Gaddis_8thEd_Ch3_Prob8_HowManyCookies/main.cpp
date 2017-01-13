/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:17 PM
  Purpose: A bag of cookies holds 30 cookies. The calorie information on the bag
 *claims that there are 10 “servings” in the bag and that a serving equals 300
 *calories. Write a program that asks the user to input how many cookies he or
 *she actually ate and then reports how many total calories were consumed.
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
    unsigned short calCkie = 30,   //Calories per cookie
                   cookAte,        //Cookies eaten
                   calCons;        //Calories consumed
            
    //Input values
    cout<<"This program calculates how many calories you've consumed"<<endl;
    cout<<"based on how many cookies you've eaten."<<endl<<endl;
    cout<<"Enter the amount of cookies eaten:"<<endl;
    cin>>cookAte;
    
    //Process by mapping inputs to outputs
    calCons = cookAte*calCkie;
    
    //Output values
    cout<<"You've consumed "<<calCons<<" calories"<<endl;
    
    //Exit stage right!
    return 0;
}