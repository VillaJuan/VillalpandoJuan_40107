/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 19, 2017, 11:05 PM
  Purpose: Write a program that asks for the names of three runners and the time it took each
of them to finish a race. The program should display who came in first, second, and
third place.
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
    //Declaration of Variables
    float time1, time2, time3;        //Running time of the three runners
    string name1, name2, name3;     //Names of the three runners
    
    //Input values
    
    
    //Process values -> Map inputs to Outputs
    
    
    //Display Output
    //Name and time of Runner 1
    cout<<"Enter the name of runner 1: "<<endl;
    cin>>name1;
    cout<<"Enter the time in minutes in which "<<name1<<" finished the race: "
            <<endl;
    cin>>time1;
    if(time1<=0)
    {
        cout<<"Please enter a number greater than 0."<<endl;
    }
    
    //Name and time of Runner 2
    cout<<"Enter the name of runner 2: "<<endl;
    cin>>name2;
    cout<<"Enter the time in minutes in which "<<name2<<" finished the race: "
            <<endl;
    cin>>time2;
    if(time2<=0)
    {
        cout<<"Please enter a number greater than 0."<<endl;
    }
    
    //Name and time of Runner 3
    cout<<"Enter the name of runner 3: "<<endl;
    cin>>name3;
    cout<<"Enter the time in minutes in which "<<name3<<" finished the race: "
            <<endl;
    cin>>time3;
    if(time3<=0)
    {
        cout<<"Please enter a number greater than 0."<<endl;
    }
    
    
    if(time1<time2 && time1<time3 && time2>time3)
    {
        cout<<"First place: "<<name1<<endl;
        cout<<"Second place: "<<name3<<endl;
        cout<<"Third place: "<<name2<<endl;
    }
    if(time1<time2 && time1<time3 && time2<time3)
    {
        cout<<"First place: "<<name1<<endl;
        cout<<"Second place: "<<name2<<endl;
        cout<<"Third place: "<<name3<<endl;
    }
    if(time2<time1 && time2<time3 && time1>time3)
    {
        cout<<"First place: "<<name2<<endl;
        cout<<"Second place: "<<name3<<endl;
        cout<<"Third place: "<<name1<<endl;
    }
    if(time2<time1 && time2<time3 && time1<time3)
    {
        cout<<"First place: "<<name2<<endl;
        cout<<"Second place: "<<name1<<endl;
        cout<<"Third place: "<<name3<<endl;
    }
    if(time3<time1 && time3<time2 && time2>time1)
    {
        cout<<"First place: "<<name3<<endl;
        cout<<"Second place: "<<name1<<endl;
        cout<<"Third place: "<<name2<<endl;
    }
    if(time3<time1 && time3<time2 && time2<time1)
    {
        cout<<"First place: "<<name3<<endl;
        cout<<"Second place: "<<name2<<endl;
        cout<<"Third place: "<<name1<<endl;
    }

    //Exit Program
    return 0;
}