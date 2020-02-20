/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on February 18, 2020, 6:49 PM
 * Purpose: Convert Celsius temperatures to Fahrenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   float tempC, tempF;
   //Initialize Variables
   cout<<"What is the temperature in Celsius?"<<endl;
   cin>>tempC;
   tempF=((9*tempC)/5)+32;
   //Process or map Inputs to Outputs

   //Display Outputs
   cout<<setprecision(1)<<fixed<<"The temperature in Fahrenheit is "<<tempF;
   //Exit stage right!
   return 0;
}