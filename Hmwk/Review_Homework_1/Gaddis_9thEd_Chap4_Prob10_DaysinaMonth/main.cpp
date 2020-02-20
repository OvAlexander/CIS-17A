/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on February 18, 2020, 7:07 PM
 * Purpose: Calculate the days in a month
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   int month, year;
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   cout<<"Enter a month (1-12): ";
   cin>>month;
   cout<<endl<<"Enter a year: ";
   cin>>year;
   cout<<endl;
   //Display Outputs
   switch(month){
      case 1:  cout<<"31 days";
               break;
      case 2:  if(year%100==0){
                  if(year%400==0)cout<<"29 days";
               }
               else if(year%4==0)cout<<"29 days";
               else cout<<"28 days";
               break;
      case 3:  cout<<"31 days";
               break;
      case 4:  cout<<"30 days";
               break;
      case 5:  cout<<"31 days";
               break;
      case 6:  cout<<"30 days";
               break;
      case 7:  cout<<"31 days";
               break;
      case 8:  cout<<"31 days";
               break;
      case 9:  cout<<"30 days";
               break;
      case 10:  cout<<"31 days";
               break;
      case 11: cout<<"30 days";
               break;
      case 12: cout<<"31 days";
               break;
      default: cout<<"Input is not a month";
   }
   //Exit stage right!
   return 0;
}