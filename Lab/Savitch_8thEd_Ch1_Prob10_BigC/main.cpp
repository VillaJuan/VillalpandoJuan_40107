/* 
 * File:   main.cpp
 * Author: Juan Villalpando
 * Created on January 5th, 2017, 12:15 PM
 * Purpose:  Shaping a  Big Letter
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
    char c;//Variable to build the big c with
    
    //Input or initialize values Here
    cout<<"This Program outputs a large C"<<endl;
    cout<<"With a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    
    //Process/Calculations Here
    
    //Output Located Here
    cout<<"A big C with the letter "<<c<<endl<<endl;
    
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    
    //Exit
    return 0;
}

