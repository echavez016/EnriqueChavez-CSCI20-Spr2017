/*
 Enrique Chavez 
 CSCI 20 
 Feb 9, 2017
 
 
 This is a program that lets you play a madlib using strings
*/


#include <iostream>
#include <string>     //need this to be able to use the strings
using namespace std;

int main() {
    
   string Adjective; 
   string Noun;
   string Plant;
   string body;
   string Place;

cout << "Welcome to MadLibs" << endl;

   cout << "enter an Adjective" << endl;
   getline(cin,  Adjective); 

   cout << "enter a Noun " << endl;
   getline(cin,  Noun); 

   cout << "Enter an Plant name  "   << endl;
   getline(cin,  Plant); 

   cout << "Enter a name of part of body. head,toe ect. "  << endl;
   getline(cin,  body); 
   
    cout << "Enter a name of a Place. "  << endl;
   getline(cin,  Place); 

   
   cout << endl;
   cout << "It's that time of the year, it's time to pick our next " << Adjective << " family adventure! " << endl;
   cout << "Last summer, my little brother fell in a/an " << Noun << " and got poison " << Plant <<" all over his " << body << "." <<endl;
   cout << "This year we are going to " << Place << " ,so fingers crossed!" <<endl; 

   return 0;
}
