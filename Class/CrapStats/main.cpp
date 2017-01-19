/* 
  File:   main.cpp
  Author: Juan Villalpando
  Created on January 12, 2017, 11:05 PM
  Purpose:  Statistics for Throwing 2 Dice
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random numbers
#include <ctime>   //Time to set the seed
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Set the random Number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned int nGames= 100000;///Number of throws for the pair of dice
    unsigned int wins= 0, losses= 0, maxThrw= 0;
    float avgThrw= 0;
    
    //Loop and take Dice statistics
    for(int game=1;game<=nGames;game++){
        
        //Call random number generator for the dice
        char die1= rand()%6+1;//Value from 1 to 6
        char die2= rand()%6+1;//Value from 1 to 6
        char sum= die1+die2;
        unsigned int cntThrw= 1;
        avgThrw++;
        
        //Now determine wins or losses
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            bool kpThrw= true;
            do{
            die1=rand()%6+1;//Value from 1 to 6
            die2=rand()%6+1;//Value from 1 to 6
            avgThrw++;cntThrw++;
            char sumAgn= die1+die2;
            if(sumAgn==7){
                losses++;
                kpThrw= false;
            }else if(sumAgn==sum){
                wins++;
            }
        }while(kpThrw);
    }
}

    //Input values
   
    //Process by mapping inputs to outputs
    //Calculate the average throws
avgThrw/=nGames;

    //Output values
cout<<"The total number of Crap games played ="<<nGames<<endl;
cout<<"The total wins = "<<wins<<endl;
cout<<"The total losses = "<<losses<<endl;
cout<<"The total number of Crap games played = "<<wins+losses<<endl;
cout<<"Percentage wins = "<<100.0f*wins/nGames<<endl;
cout<<"Percentage losses = "<<100.0f*losses/nGames<<endl;
cout<<"Average number of throws per game = "<<avgThrw<<endl;
cout<<"Maximum number of throws in a game = "<<maxThrw<<endl;

    //Exit stage right!
    return 0;
}