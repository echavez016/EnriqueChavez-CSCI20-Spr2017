/*
 Enrique Chavez 
 CSCI 20 
 April 27, 2017
 4.6 Lab - File Input/Output
     
 program will read a student’s grades and output an HTML page
 should output semester GPA, overall GPA, student’s name, semester (as a number), and list of grades (A, B, C, D, F) and class hours.
*/

#include <iostream>
#include <fstream>
using namespace std; 

int main (){
   ifstream TheInput;     // Input file stream
    TheInput.open("test.txt");
   
   if (!TheInput.is_open()) {
         cout<<"something went wrong"<<endl; 
    }
    
        string Firstname;
        string Lastname;
        int semester;
        int unitGrade[4];
        int TotalUnit;
        int overallGPA;
       
        
        cout << " student transcript program   "<<endl;
        
         TheInput >> Firstname ;
         TheInput >> Lastname ;
         TheInput >> semester ;
         TheInput >> unitGrade [4] ;
         TheInput >> TotalUnit ;
    
 
   
      
 cout<<"     Name - "<< Firstname << " "<< Lastname <<endl;
 
 
 cout<<"     Semester (in number) - "<< semester << endl;
 
 
 cout<<"     Units Grade - "<< unitGrade [4] <<endl;
 
 
 cout<<"     Total Units(before this semester) Current Overall GPA (Before this semester) - "<< TotalUnit <<endl;
 
    

    TheInput.close(); 
    
}