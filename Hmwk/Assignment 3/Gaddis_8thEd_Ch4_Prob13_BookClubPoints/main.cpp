/* 
File:   main.cpp
Author: Juan Villalpando
Created on January 19, 2017, 11:05 PM
Purpose: Serendipity Booksellers has a book club that awards points to its customers based on
the number of books purchased each month. The points are awarded as follows:
• If a customer purchases 0 books, he or she earns 0 points.
• If a customer purchases 1 book, he or she earns 5 points.
• If a customer purchases 2 books, he or she earns 15 points.
• If a customer purchases 3 books, he or she earns 30 points.
• If a customer purchases 4 or more books, he or she earns 60 points.
Write a program that asks the user to enter the number of books that he or she has
purchased this month and then displays the number of points awarded.
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
int main(int argc, char** argv) {
//Declare Variables
    int books,   //Number of books purchased this month
            points;//Number of points received this month
            

//Input values
    cout<<"Welcome to the Serendipity Book Club Reward Points Redemption Program!"<<endl;
    cout<<"Please enter the number of books you've purchased this month"<<endl;
    cin>>books;
    
//Process by mapping inputs to outputs
    
//Display the Outputs
    switch(books){
        case 0:cout<<"You didn't buy enough books this month to qualify for any points!"<<endl; //How can I program the switch statement to avoid decimals such as 0.36?
        break;
        case 1:cout<<"You purchased 1 book this month and will receive 5 reward points."<<endl;
        break;
        case 2:cout<<"You purchased 2 books this month and will receive 15 reward points."<<endl;
        break;
        case 3:cout<<"You purchased 3 books this month and will receive 30 reward points!"<<endl;
        break;
        default:cout<<"Congratulations, you have purchased 4 or more books this month and will receive 60 reward points!"<<endl;
    }
           
    //Exit stage right!
    return 0;
}