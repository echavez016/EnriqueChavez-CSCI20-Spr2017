/*
 Enrique Chavez 
 CSCI 20 
 April 20, 2017
 4.4 Lab - C Strings`   
 This program is responsible for creating user names for a new website you have created.  
 It should accept a first name of up to 10 characters and a last name of up to 20 characters.  
 It should tell the user if the name is larger than the max size. 
 It should also determine if the names are the same and output a warning. 
 After checking these things, it should create three different user name options (for example: apbrowne; aprilbrowne; abrowne).
*/

#include <iostream>
#include <cstring>    // strlen- Get string length (function )
using namespace std;

int main() {
        
    int size = 0; 
    int size1 = 0; 
 
    char firstName[10]; 

    StartAgain:
    cout << "Enter your first name" << endl;
    cin >> firstName;

    size = strlen(firstName); //Get string length function
    if(size >=11)
    {
        cout << "max allowed size is 10 char" <<endl;
        goto StartAgain;
    }

  
  
   char lastName[20]; 

   
    cout << "Enter your last name" << endl;
    cin >> lastName;

    size = strlen(lastName);
    if(size >=11)
    {
        cout << "max allowed size is 10 char" <<endl;
        goto StartAgain;
    }
  
  
  cout<<"which of these usernames would you like:"<<endl;
    
        cout<< "   -" << firstName[0]<<firstName[1]<<lastName<<endl;
        cout<< "   -" << firstName << lastName <<endl;
        cout<< "   -" << firstName[0]<< lastName <<endl;
  
   return 0;
}
