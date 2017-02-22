/*
 Enrique Chavez 
 CSCI 20 
 Feb 16, 2017
 2.1 Lab - Calling Functions
 
 this program shows wind chill and calculates it using the new and old formula and shows the diffrence 
*/
#include <iostream>
#include <cmath> // will lwt me use a numerous amount of new math functions 
using namespace std;
 
 int main() {
     
     double oldStyleWindChill = 0.0;
     double newStyleWindChill = 0.0;
     double velocity = 0.0;
     double temp = 0.0;
     double exponent =0.16;
     double diffrence = 0.0;

     cout << "Input Temperature - ";
        cin >> temp;      
     
      cout << "Input windspeed(velocity) - ";
         cin >> velocity;  
     
        
    // oldStyleWindChill formula 
    oldStyleWindChill = 0.081 * (3.71 * sqrt( velocity ) + 5.81 - 0.25 * velocity) * (temp - 91.4) + 91.4;
     
     //newStyleWindChill formula 
     
     newStyleWindChill = 35.74 + 0.6215 * temp - 35.75 * pow (velocity , exponent) + 0.4275 * temp * pow (velocity ,exponent); 
     
     //diffrence 
     diffrence =  oldStyleWindChill - newStyleWindChill;
     
   
   // final output 
   cout << "Wind Speed   " << "Old Formula    " << "New Formula    " << "Difference"<< endl;
   cout << velocity << "               "<< oldStyleWindChill<< "      " << newStyleWindChill <<"        " << diffrence <<endl;
   
     
   
   return 0;  
 };