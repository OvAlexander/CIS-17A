/* 
 * File:   main.cpp
 * Author: Alexander Ov
 * Created on February 18, 2020, 6:56 PM
 * Purpose: Convert US Dollars to Japanese Yen to Euros
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
const float YEN_PER_DOLLAR = 110.03;
const float EUROS_PER_DOLLAR = 0.93;
//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
   //Set Random Number seed

   //Declare Variable Data Types and Constants
   float usd;
   //Initialize Variables
   
   //Process or map Inputs to Outputs
   cout<<"How many US Dollars?"<<endl;
   cin>>usd;
   cout<<setprecision(2)<<fixed<<"Amount of Yen: ¥"<<usd*YEN_PER_DOLLAR<<endl<<"Amount of Euros: €"<<usd*EUROS_PER_DOLLAR;
   //Display Outputs

   //Exit stage right!
   return 0;
}