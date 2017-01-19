/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:05 PM
  Purpose:  Penny Doubling for salary and pay 31 days good
 */

#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem with For"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                cout<<"We are in Problem 1"<<endl;
                break;
            }
            case '2':{
                cout<<"We are in Problem 2"<<endl;
                break;
            }
            case '3':{
                cout<<"We are in Problem 3"<<endl;
                break;
            }
            default:
                cout<<"You are exiting the program"<<endl;
        }
    }while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}

//000000011111112222222333333344444445555555666