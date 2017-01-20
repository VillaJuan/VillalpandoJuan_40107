/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose: A software company sells a package that retails for $99. Quantity discounts are given
  according to the following table.
        Quantity Discount
        10–19 20%
        20–49 30%
        50–99 40%
        100 or more 50%
  Write a program that asks for the number of units sold and computes the total
  cost of the purchase.
  Input Validation: Make sure the number of units is greater than 0.
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
int main(int argc, char** argv){
//Declare Variables
    float untSold,      //Number of Units sold
            untPrce= 99,//Price per unit in $'s
            dscount,    //Discount on purchase
            subtotl,    //Total price before discount
            totPrce;    //Total purchase price after discount

//Input values
    cout<<"The total purchase price is deducted by a percentage based on the number of units sold"<<endl;
    cout<<"Enter the number of units being purchased"<<endl;
    cin>>untSold;
    cout<<setprecision(2)<<fixed;
    
//Process by mapping inputs to outputs

//Display the Outputs
    if(untSold > 0.99 && untSold < 10){
        subtotl= untSold*untPrce;
        cout<<"Total purchase price is $"<<subtotl<<endl;
    }
    else if (untSold > 10 && untSold < 20){
        subtotl= untSold*untPrce;
        cout<<"Subtotal: $"<<subtotl<<endl;
        totPrce= subtotl-(subtotl*.2);
        cout<<"Your total purchase price after 20% discount is $"<<totPrce<<endl;
    }
    else if (untSold > 19 && untSold < 50){
        subtotl= untSold*untPrce;
        cout<<"Subtotal: $"<<subtotl<<endl;
        totPrce= subtotl-(subtotl*.3);
        cout<<"Your total purchase price after 30% discount is $"<<totPrce<<endl;
    }
    else if (untSold > 49 && untSold < 100){
        subtotl= untSold*untPrce;
        cout<<"Subtotal: $"<<subtotl<<endl;
        totPrce= subtotl-(subtotl*.4);
        cout<<"Your total purchase price after 40% discount is $"<<totPrce<<endl;
    }
    else if (untSold > 99){
        subtotl= untSold*untPrce;
        cout<<"Subtotal: $"<<subtotl<<endl;
        totPrce= subtotl-(subtotl*.5);
        cout<<"Your total purchase price after 50% discount is $"<<totPrce<<endl;
    }
    else if (untSold < 1){
        cout<<"You must enter a number higher than 1! Try again."<<endl;
    }
    //Exit stage right!
    return 0;
}