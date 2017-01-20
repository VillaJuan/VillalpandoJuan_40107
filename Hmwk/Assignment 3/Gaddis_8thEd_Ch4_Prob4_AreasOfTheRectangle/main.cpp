/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose: The area of a rectangle is the rectangle’s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user which
rectangle has the greater area, or if the areas are the same.
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
    float width1,
            length1,//Measurements of the first rectangle
            width2,
            length2;//Measurements of the second rectangle
    int rectAng1,   //Rectangle One
            rectAng2,//Rectangle Two
            greater;//Rectangle with the greatest area
//Input values
    cout<<"This program takes the width and length of two rectangles in order to"<<endl;
    cout<<"determine the area of both rectangles and find out which one has the largest area"<<endl<<endl;
    cout<<"Enter the width of the first rectangle"<<endl;
    cin>>width1;
    cout<<"Enter the length of the first rectangle"<<endl;
    cin>>length1;
    cout<<"Now enter the width of the second rectangle"<<endl;
    cin>>width2;
    cout<<"Finally, enter the length of the second rectangle"<<endl;
    cin>>length2;
    
//Process by mapping inputs to outputs
    rectAng1= width1*length1;
    rectAng2= width2*length2;
    if (greater= rectAng1 > rectAng2 ? rectAng1:rectAng2);{
    cout<<"Between both rectangles the greater area is "<<greater<<endl;
    }                
//Display the Outputs

    //Exit stage right!
    return 0;
}