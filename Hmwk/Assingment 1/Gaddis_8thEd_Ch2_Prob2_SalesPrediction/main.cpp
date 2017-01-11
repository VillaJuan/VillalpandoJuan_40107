/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 10, 2017, 11:55 PM
  Purpose:  Determine how much a company will generate in profit based on sales
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
    float eastCos=   0.58;     //East Coast branch sales percent
    int totSale  =   8600000, //Total sales in the company in $'s
    estSale;                  //East Coast $'s generated
    
    //Input values
    
    //Process by mapping inputs to outputs
    estSale= eastCos*totSale;
    
    //Output values
    cout<<"This program displays the amount of revenue a single branch"<<endl;
    cout<<"of a company generates compared to the total sales"<<endl<<endl;
    cout<<"The Company's total sales are $"<<totSale<<endl;
    cout<<"East Coast Divison holds $"<<estSale<<" of the total sales"<<endl;
            
    //Exit stage right!
    return 0;
}