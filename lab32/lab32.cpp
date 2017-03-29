/*
 Enrique Chavez 
 CSCI 20 
 March 28, 2017
 3.2 Lab - Switch Case
 
 A program that will calculate the income tax, and amount owed or to be refunded for a person (or couple).  The program will take the following basic tax information: name, filing status (single or married), gross wages, and the amount of tax withheld.  It will then calculate the taxes as follows:
Input gross wages and marital status
Subtract the personal exemption of $3,900. For a joint (married) return, these amounts are subtracted for each person.
If the resulting number is less than zero, then the owed tax is zero. If the number is above zero, use the tax tables to calculate the tax.
 
*/

#include <iostream>
#include <string>
using namespace std;
 
 int main() {
    string name;
    char filingStatus; 
    double wages;
    double Wages;
    double Withheld;
    double taxOwed; 
    double percentage;
  
//propt user for name 
     cout<<"what is your name?"<<endl;
     cout<<"welcome to the tax machine! I'm going to calculate your income tax now but I'm going to need some info...."<<endl;  
     getline(cin, name);
//propt user for Gross Income 
     cout << "please enter your Adjusted Gross Income"<<endl;
     cin >> wages;
//propt user for Withheld             
     cout << "please enter Withheld" <<endl;
     cin >> Withheld;
//propt user for switch  filingStatus     
     cout<<"okay, "<< name << " are you married? please either enter yes or no. y for yes n for no." <<endl;
     cin >> filingStatus; 
    
            switch ( filingStatus )
            {
            case 'y':
             
                     Wages = wages - 3900;
            
                   if (Wages == 0 ){
                        cout<<"the owed tax is zero."<<endl;
                        
                        cout << "Name:"<< name <<endl;
                        cout << "Total Gross Adjusted Income:"<< wages <<endl;
                        cout << "Total tax owed:"<< taxOwed <<endl;
                        cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl; 
                        } 
           
           
                        else if ( Wages<= 1 && Wages >= 17850 ){
                            cout<<"your tax is 10% of the AGI"<<endl;
                            taxOwed = wages * 0.10;
                            wages = wages - taxOwed;
            
                            cout << "Name:"<< name <<endl;
                            cout << "Total Gross Adjusted Income:"<< wages <<endl;
                            cout << "Total tax owed:"<< taxOwed <<endl;
                            cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl; 
                        }
            
            
                            else if ( Wages >=17851 && Wages <= 72500 ){
                                cout<<"your tax is $1,785 plus 15% of the excess over $17,850"<<endl;
                                taxOwed = wages * 0.15;
                                wages = (wages - taxOwed) - 1785 ;
            
                                cout << "Name:"<< name <<endl;
                                cout << "Total Gross Adjusted Income:"<< wages <<endl;
                                cout << "Total tax owed:"<< taxOwed <<endl;
                                cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl; 
                            }
            
            
            
                                else if (Wages >= 72501){
                                    cout<<"your tax is $9,982.50 plus 28% of the excess over $72,500"<<endl;
                                    taxOwed = wages * 0.28;
                                    wages = (wages - taxOwed) - 9982.50 ;
            
                                    cout << "Name:"<< name <<endl;
                                    cout << "Total Gross Adjusted Income:"<< wages <<endl;
                                    cout << "Total tax owed:"<< taxOwed <<endl;
                                    cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl; 
                                }
             break;
        
        
             case 'n':
             Wages = wages;
    
                if (Wages ==0){
                     cout<<"the owed tax is zero."<<endl;
            
                      cout << "Name:"<< name <<endl;
                      cout << "Total Gross Adjusted Income:"<< wages <<endl;
                      cout << "Total tax owed:"<< taxOwed <<endl;
                      cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl;
                }
                
                    else if (wages <= 1 && wages <= 8925){
                        cout<<"your tax is 10% of the AGI"<<endl;
            
                        taxOwed = wages * 0.10;
                        wages = wages - taxOwed ;
            
                        cout << "Name:"<< name <<endl;
                        cout << "Total Gross Adjusted Income:"<< wages <<endl;
                        cout << "Total tax owed:"<< taxOwed <<endl;
                        cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl;
                    }
        
                        else if ( wages >=8926  && wages <= 36250 ){
                            cout<<"your tax is $892.50 plus 15% of the excess over $8,925"<<endl;
                
                            taxOwed = wages * 0.15;
                            wages = (wages - taxOwed) - 892.50  ;
            
                            cout << "Name:"<< name <<endl;
                            cout << "Total Gross Adjusted Income:"<< wages <<endl;
                            cout << "Total tax owed:"<< taxOwed <<endl;
                            cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl;
                        }
       
                            else if (wages >=36251 && wages <= 87850){
                                cout<<"your tax is $4991.25 plus 25% of the excess over $36,250"<<endl;
                     
                                taxOwed = wages * 0.25;
                                wages = (wages - taxOwed) - 4991.25 ;
            
                                cout << "Name:"<< name <<endl;
                                cout << "Total Gross Adjusted Income:"<< wages <<endl;
                                cout << "Total tax owed:"<< taxOwed <<endl;
                                cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl;
                            }
        
                                else if (wages >=87851){
                                    cout<<"your tax is $17,891.25 plus 28% of the excess over $87,850"<<endl;
                         
                                    taxOwed = wages * 0.28;
                                    wages = ( wages - taxOwed) - 17891.25;
                
                                    cout << "Name:"<< name <<endl;
                                    cout << "Total Gross Adjusted Income:"<< wages <<endl;
                                    cout << "Total tax owed:"<< taxOwed <<endl;
                                    cout << name <<" is entitled to a REFUND of $"<< Withheld <<"."<<endl;
                                }
             
             break;
        
             default :
                 cout<<"Please either type y for yes n for no with no caps or spaces, now go restart the program" <<endl; 
      
    }
     
     
    
   
     return 0;  
 
     
 }
 
