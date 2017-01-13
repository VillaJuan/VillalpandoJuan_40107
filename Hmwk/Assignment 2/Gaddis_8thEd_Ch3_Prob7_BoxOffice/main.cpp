/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 11, 2017, 11:07 AM
  Purpose: A movie theater only keeps a percentage of the revenue earned from ticket sales. The
remainder goes to the movie distributor. Write a program that calculates a theater’s
gross and net box office profit for a night. The program should ask for the name of the
movie, and how many adult and child tickets were sold. (The price of an adult ticket is
$10.00 and a child’s ticket is $6.00.) It should display a report similar to
Movie Name: “Wheels of Fury”
Adult Tickets Sold: 382
Child Tickets Sold: 127
Gross Box Office Profit: $ 4582.00
Net Box Office Profit: $ 916.40
Amount Paid to Distributor: $ 3665.60
 */

//System Libraries
#include <iostream>
#include <string>
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
    string         movName;
    unsigned short aTxSold,
                   cTxSold;
    float          netProf,
                   grosProf,
                   adulTix  = 10.00,
                   chldTix  =  6.00,
                   drctCut;
    
    //Input values
    cout<<"This program calculates both the Gross and Net profits of a theater for a particular movie."<<endl<<endl;
    cout<<"Enter the name of selected movie"<<endl;
    getline(cin, movName);
    cout<<"Enter how many adult were sold:"<<endl;
    cin>>aTxSold;
    cout<<"Enter how many child tickets were sold:"<<endl;
    cin>>cTxSold;
    cout<<endl<<endl;
    
    //Process by mapping inputs to outputs
    grosProf = (adulTix*aTxSold)+(chldTix*cTxSold);
    netProf  = grosProf*.20;
    drctCut  = grosProf-netProf;
    
    //Output values
    cout<<"Movie Name: "<<movName<<endl;
    cout<<"Adult Tickets sold: "<<aTxSold<<endl;
    cout<<"Child Tickets sold: "<<cTxSold<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Gross Box Office Profits:   $"<<grosProf<<endl;
    cout<<"Net Box Office Profits:     $"<<netProf<<endl;
    cout<<"Amount paid to distributor: $"<<drctCut<<endl;
    
    //Exit stage right!
    return 0;
}