/*
 Enrique Chavez 
 CSCI 20 
 March 30, 2017
 3.3 Lab - Loops
 
 A guessing game program. read in a value between 1 and 50 
 (if they enter a value outside of that range it should ask them 
 to re-enter a value until they enter a valid value).  
 The program will check the user’s number against the computer generated number.
 If the user’s number is too high it will say “Too High” 
 and ask the user to guess again.  If the user’s number is too low, 
 it will say “Too Low” and ask the user to guess again. 
 If the user finds the number, the program will tell the user “Just Right” 
 and end the program.
*/

#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main() {
    
    /* initialize random seed: */
    srand (time(NULL)); 
    int personsGuess;
    int ranNum;
    int timesPlayed; 
    
    ranNum = rand() % 50 + 1;     // random numbers in the range 1 to 50 
    
     cout<<" Welcome to The Random Number Generator Game!"<<endl;
      cout<<"You choose a number between 1-50"<<endl;
     
    do {
        
        for (ranNum != personsGuess; timesPlayed = timesPlayed + 1;){    
       
        cin>>personsGuess; 
            if ( personsGuess >=1 && personsGuess <= 50 ){
                
                if (personsGuess == ranNum){
                    cout<<"Thats right!"<<endl;
                    cout<<"You Won!"<<endl;
                     cout<<"you attempted " << timesPlayed<< " time(s)."<<endl; 
                    
                }
                
                    else if (personsGuess < ranNum){
                          cout<<"Thats too low try again"<<endl;
                    }
                    
                        else if (personsGuess > ranNum){
                            cout<<"Thats too high try again"<<endl;
                        }
                        
            }
            else {
                cout<<"You did not enter a number between 1 and 50 try again"<<endl;
            }
            
         
       
         
        
        }
       
       
        
    } while (ranNum != personsGuess);
     
    
     

     return 0;  
 }
 