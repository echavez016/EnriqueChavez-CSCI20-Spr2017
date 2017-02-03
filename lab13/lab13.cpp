/* Enrique Chavez 
    This is a population calculator 

*/

#include <iostream>
using namespace std;

int main() {
    
    int year = 2017;
    int population = 324472600;
    int yearInFuture = 0;
    int futurePopulation = 0;
   // int populationIncrease = 2102400;
   int populationIncrease = 0;
    int populationMin = 4;
    int populationHour = 60;
    int populationDay = 24;
    int populationYear = 365;
    
    
    
    cout << "The population of The United States today is around " << population << "." << endl;
    cout << "Please enter in how many years in the future you want to know what the population of The United States will be. ";
     cin >> yearInFuture;  
    
    year = yearInFuture + year;  //this makes the program show the future year instead of just the number the user inputs 
    
         populationIncrease = (populationMin * populationHour *populationDay * populationYear);
        
        futurePopulation = ( populationIncrease * yearInFuture ) + population; //this is the equation that figures out the population 
        
    cout << "In the year " << year << ", the population will be " << futurePopulation << " in The United States." << endl;
    
  
   return 0;
}