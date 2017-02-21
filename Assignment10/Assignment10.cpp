/*
 Enrique Chavez 
 CSCI 20 
 Feb 16, 2017
 1.0 Assignment - Calculators
 
 This program lets user enter their avarage and view their grade.
 
*/

#include <iostream>
#include <string>     //need this to be able to use the strings
using namespace std;

    struct ReportCard {  // blueprint for grading 
        bool prep; 
        bool lab;
        bool test;
    };

int main() {
    
    ReportCard studemt;
    
    bool prep = 300.0;  // This is for struct 
    bool lab = 500.0;
    bool test = 200.0;
    
    bool prepInput = 0.0; //gathers prep totals
    bool prepTotal = 0.0;
    
    bool labInput = 0.0; //gathers lab totals
    bool labTotal = 0.0;
    
    bool testInput = 0.0; //gathers test totals
    bool testTotal = 0.0;
    
    bool total = 0.0; // cumulative grade
    
    int timeIn = 0; // collects class time 
    string name;

   cout << "This is a program that calculates a person’s current and end average for this class." << endl;
   
   
   cout << "Please enter Your Name. " << endl;  // collects name 
   getline (cin,name);
   
   
   cout << "Great, now enter youur Preparation & Participation avarage. (enter a number 1-100)"<< endl; // collects prep avg.
   cin >> prepInput;
   prepTotal = (prepInput / prep);  // equation for prep total 
   
   cout << "Good, now enter youur Projects & Labs avarage. (enter a number 1-100)" << endl;   // collects lab avg.
   cin >> labInput;
   labTotal = (labInput / lab);   // equation for lab total 
   
   cout << "Good, now enter youur Tests avarage. (enter a number 1-100)" << endl;   // collects test avg.
   cin >> testInput;
   testTotal = (testInput / test); // equation for test total 
   
   cout << "okay, now finally enter your time in class. (enter a number 1-100)" << endl;   // collects class time
   cin >> timeIn;
  
  total = (prepTotal + labTotal + testTotal) * 100;  // equation for cumulative grade
  
  cout << name << ", " << prepTotal  << "/ 100, " << labTotal << "/ 100, " << testTotal << "/ 100, " << timeIn << endl; //Showa final outcome of the data 
 
 
    
   return 0;
}
