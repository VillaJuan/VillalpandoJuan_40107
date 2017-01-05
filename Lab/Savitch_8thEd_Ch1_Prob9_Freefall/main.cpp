/* 
 * File:   main.cpp
 * Author: Juan Villalpando
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Free Fall
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float GRAVITY=3.2174e1f;//Gravity on the earth sea level ft/sec^2

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time,     //Time in seconds
            distnce;//Distance in feet
    
    //Input or initialize values Here
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"Input the time during free-fall in seconds"<<endl;
    cin>>time;
    
    //Process/Calculations Here
    distnce=GRAVITY*time*time/2;
    
    //Output Located Here
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;
    
    //Exit
    return 0;
}

