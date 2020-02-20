/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on February 18, 2020, 7:22 PM
 * Purpose: Predicts the size of a population of organisms
 */

//System Libraries
#include <iostream>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   int intSize,days,newSize;
   float perGrow;
   //Initialize Variables
   cout<<"Input the size of the population."<<endl;
   cin>>intSize;
   if(intSize<2){
      while(intSize<2){
         cout<<"Invalid size, try again."<<endl;
         cin>>intSize;   
      }
   }
   cout<<"Input the percentage of the population growth."<<endl;
   cin>>perGrow;
   cout<<"Input the number of days the population."<<endl;
   cin>>days;
   if(days<1){
      while(days<1){
         cout<<"Invalid number of day, try again."<<endl;
         cin>>days;
                 
      }
   }
   //Process or map Inputs to Outputs
   newSize=intSize;
   for(int i=0;i<days;i++){
      newSize=(newSize*(perGrow/100))+newSize;
      cout<<"Day "<<i+1<<" Population: "<<newSize<<endl;
   }
   //Display Outputs
   
   //Exit stage right!
   return 0;
}