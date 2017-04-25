/*
 Enrique Chavez 
 CSCI 20 
 April 25, 2017
 4.5 Lab - String
 accepts a first name of up to 10 characters and a last name of up to 20 characters. 
 tells the user if the name is larger than the max size
determine if the names are the same and output a warning.
 creates three different user name options (for example: apbrowne; aprilbrowne; abrowne).
*/

#include <iostream>
#include <string>  //.size() and string 
using namespace std;

int main() {
        

 
string firstName;
string lastName;

    StartAgain:
    cout << "Enter your first name" << endl;
    cin >> firstName;


if( firstName.size() >= 11)                 // tells the user if the name is larger than the max size
    {
        cout << "max allowed size is 10 char" <<endl;
        goto StartAgain;
    }

       


   
    cout << "Enter your last name" << endl;
    cin >> lastName;



if(lastName.size() >= 21)                   // tells the user if the name is larger than the max size
    {
        cout << "max allowed size is 20 char" <<endl;
        goto StartAgain;
    }
   
       
if(lastName == firstName ){                 //determine if the names are the same and output a warning.
      cout << "!! warning first and last name is the same !!" <<endl;
}

  
  
  cout<<"which of these usernames would you like:"<<endl;
  
  
                                                                        // creates three different user name options
        cout<< "   -" << firstName[0]<<firstName[1]<<lastName<<endl;
        cout<< "   -" << firstName << lastName <<endl;
        cout<< "   -" << firstName[0]<< lastName <<endl;
  
   return 0;
}
