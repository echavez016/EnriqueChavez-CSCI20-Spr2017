/*
 Enrique Chavez 
 CSCI 20 
 March 22, 2017
 3.1 Lab - Conditions
 
 A program for a new cell phone company that uses complicated formulas to determine the charges for their service. 
 
*/

#include <iostream>
using namespace std;
 
 int main() {
     
     //my variables 
     
        int dumbPhones = 0;
        int smartPhones = 0;
        int tablets = 0;
        int GbPerMonth = 0; 
        double monthlyBill = 0;
        double FinalBill = 0; 
        double corporateDiscount = 0;  
        string corporate;  
        
        
        
        cout << "How many dumb  phones do you want to have on the plan?" << endl;
      cin >> dumbPhones;
          
         cout << "How many smart phones do you want on the plan?" << endl;
         cin >> smartPhones;
         smartPhones = smartPhones * 5; 
            cout << "How many tablets do you want on the plan?" << endl;
            cin >> tablets;
            tablets = tablets * 10;
               
             
               cout << "how much Gb do you use per month roughly?" << endl;
               cin >> GbPerMonth;
               if (GbPerMonth <= 10){
                   cout << "I recomend unlimited talk and text plan for you." << endl;
                   
                  FinalBill = monthlyBill + 75; 
               }    
               if (GbPerMonth >= 6 && GbPerMonth <= 20){
                   cout <<"I recomend pay per data charge for you."; 
               
                    FinalBill = monthlyBill + 8.75; 
               }
                if (GbPerMonth >= 21){
                   cout <<"I recomend pay per data charge for you.";
                    
                    FinalBill = monthlyBill + 31.25;
               }
               
                   
                   cout << "Are you a corporate customer? yes or no " << endl;
                   cin >> corporate;
                   if("yes"){
                     FinalBill * .10 ;
                     FinalBill = FinalBill - corporateDiscount;  
                   }
   
  
   
   
   cout << "your monthly bill will be - " << FinalBill + dumbPhones + smartPhones + tablets << endl;
       return 0;  
 };