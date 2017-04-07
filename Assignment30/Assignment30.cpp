/*
 Enrique Chavez 
 CSCI 20 
 April 6, 2017
3.0 Assignment - Game
 
 
*/

#include <iostream> 
#include <string> 
#include <stdlib.h>     
#include <time.h> 
using namespace std;

   
   /*
   NEED A CLASS FOR THE COMPUTER HERE 
   */
   
   
   int main (){
         int answer; 
         
    cout << endl;
    cout << "lets play Rock Paper scissors lizard Spock à la The Big Bang theory ." << endl; 
    cout << endl;
     cout << "rules: The computer chooses one of the five options and the user chooses one." << endl;
     cout << "         Scissors cuts Paper." << endl;
     cout << "         Paper covers Rock." << endl;
     cout << "         Rock crushes Lizard." << endl;
     cout << "         Lizard poisons Spock." << endl;
     cout << "         Spock smashes Scissors." << endl;
     cout << "         Scissors decapitates Lizard." << endl;
     cout << "         Lizard eats Paper." << endl;
     cout << "         Paper disproves Spock." << endl;
     cout << "         Spock vaporizes Rock." << endl;
     cout << "         (and as it always has) Rock crushes Scissors." << endl;
     cout << "when prompted enter a number 1-5 to choose an option ." << endl;
     cout << "choices : 1 scissors" << endl; 
     cout << "          2 rock" << endl;
     cout << "          3 paper" << endl;
     cout << "          4 lizard" << endl;
     cout << "          5 Spock" << endl; 
     
     do{
     
     cout << "Ready to play? 3 2 1 GO!" << endl; 

    /* initialize random seed: */
    srand (time(NULL)); 
    int pcInput;
    pcInput = rand() % 5 + 1;     // random numbers in the range 1 to 5 

    int input;
    
    cin >> input; 
    
    
   
    switch (input)
    {
     case 1 :
                if (pcInput == 1){
                    
                    cout << "computer chooses: scissors " << endl;
                    cout << "its a tie!" << endl;
                }
                    else if (pcInput == 2) {
                        
                        cout << "computer chooses: rock" << endl;
                        cout << "you loose!" << endl;
                    }
                        else if (pcInput == 3) {
                            
                            cout << "computer chooses: paper" << endl;
                            cout << "you win!" << endl;
                        }
                            else if (pcInput == 4) {
                                                    
                                cout << "computer chooses: lizard" << endl;
                                cout << "you win!" << endl;
                            }
                            
                                else if (pcInput == 5) {
                        
                                cout << "computer chooses: Spock" << endl;
                                cout << "you loose!" << endl;
                                }
             
     break;
    
    
        case 2 :
                if (pcInput == 1){
                    
                    cout << "computer chooses: scissors" << endl;
                    cout << "you win!" << endl;
                }
                    else if (pcInput == 2) {
                        
                        cout << "computer chooses: rock" << endl;
                        cout << "its a tie!" << endl;
                    }
                        else if (pcInput == 3) {
                            
                            cout << "computer chooses: paper" << endl;
                            cout << "you loose!" << endl;
                        }
                            else if (pcInput == 4) {
                                                    
                                cout << "computer chooses: lizard" << endl;
                                cout << "you win!" << endl;
                            }
                            
                                else if (pcInput == 5) {
                        
                                cout << "computer chooses: Spock" << endl;
                                cout << "you loose!" << endl;
                                }
                 
        break;
    
    
            case 3 :
                if (pcInput == 1){
                    
                    cout << "computer chooses: scissors" << endl;
                    cout << "you loose!" << endl;
                }
                    else if (pcInput == 2) {
                        
                        cout << "computer chooses: rock" << endl;
                        cout << "you win!" << endl;
                    }
                        else if (pcInput == 3) {
                            
                            cout << "computer chooses: paper" << endl;
                            cout << "its a tie!" << endl;
                        }
                            else if (pcInput == 4) {
                                                    
                                cout << "computer chooses: lizard" << endl;
                                cout << "you loose!" << endl;
                            }
                            
                                else if (pcInput == 5) {
                        
                                cout << "computer chooses: Spock" << endl;
                                cout << "you win!" << endl;
                                }
            
            break;
    
    
                case 4 :
                if (pcInput == 1){
                    
                    cout << "computer chooses: scissors" << endl;
                    cout << "you loose!" << endl;
                }
                    else if (pcInput == 2) {
                        
                        cout << "computer chooses: rock" << endl;
                        cout << "you loose!" << endl;
                    }
                        else if (pcInput == 3) {
                            
                            cout << "computer chooses: paper" << endl;
                            cout << "you win!" << endl;
                        }
                            else if (pcInput == 4) {
                                                    
                                cout << "computer chooses: lizard" << endl;
                                cout << "its a tie!" << endl;
                            }
                            
                                else if (pcInput == 5) {
                        
                                cout << "computer chooses: Spock" << endl;
                                cout << "you win!" << endl;
                                }
               
                break;
    
    
                    case 5 :
                if (pcInput == 1){
                    
                    cout << "computer chooses: scissors" << endl;
                    cout << "you win!" << endl;
                }
                    else if (pcInput == 2) {
                        
                        cout << "computer chooses: rock" << endl;
                        cout << "you win!" << endl;
                    }
                        else if (pcInput == 3) {
                            
                            cout << "computer chooses: paper" << endl;
                            cout << "you loose!" << endl;
                        }
                            else if (pcInput == 4) {
                                                    
                                cout << "computer chooses: lizard" << endl;
                                cout << "you loose!" << endl;
                            }
                            
                                else if (pcInput == 5) {
                        
                                cout << "computer chooses: Spock" << endl;
                                cout << "its a tie!" << endl;
                                }
                
                    break;
    default:
        cout << "coose a number between 1 and 5" << endl;
    
   
    //code goes here 
    }
     
   
   
   
 
     
    cout << "do you want to play again? 1 for yes 2 for no " <<endl;
    cin >> answer;
     
     
     }while( answer == 1);
     
     cout << "Good bye.\n";
         
         return 0;
     }