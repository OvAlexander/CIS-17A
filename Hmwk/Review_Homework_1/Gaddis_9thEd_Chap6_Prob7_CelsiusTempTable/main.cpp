/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on February 19, 2020, 1:17 PM
 * Purpose: Convert Fahrenheit temperature to Celsius 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float celsius(float f);
//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants

   //Initialize Variables

   //Process or map Inputs to Outputs
   for(int i=0;i<21;i++){
      cout<<setprecision(1)<<fixed<<i<<" Fahrenheit = "<<celsius(i)<<" Celsius"<<endl;
   }
   //Display Outputs

   //Exit stage right!
   return 0;
}
float celsius(float f){
   return (5*(f-32))/9;
}