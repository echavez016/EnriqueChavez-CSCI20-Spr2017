/*
 Enrique Chavez 
 CSCI 20 
 Feb 16, 2017
 1.6 Lab - Objects
 
 this program lets user input 2 monsters
*/

#include <iostream>
#include <string>     //need this to be able to use the strings
using namespace std;

struct Plan{           // struct lets the the variables be used more than once 
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
    
}MonsterPlan;

int main() {
    
        cout << "enter the characteristics of monster number one" << endl;
      
       cout << "head" << endl;
        cin >> (MonsterPlan.head); 
        
        cout << "eyes" << endl;
        cin >> (MonsterPlan.eyes); 
        
        cout << "ears" << endl;
       cin >> (MonsterPlan.ears);         
        
        cout << "nose" << endl;
       cin >> (MonsterPlan.nose);       
        
        cout << "mouth" << endl;
       cin >> (MonsterPlan.mouth);  
       
      cout << "enter the characteristics of monster number two" << endl;
      
       cout << "head" << endl;
        cin >> (MonsterPlan.head); 
        
        cout << "eyes" << endl;
        cin >> (MonsterPlan.eyes); 
        
        cout << "ears" << endl;
       cin >> (MonsterPlan.ears);         
        
        cout << "nose" << endl;
       cin >> (MonsterPlan.nose);       
        
        cout << "mouth" << endl;
       cin >> (MonsterPlan.mouth);     


    
  
   return 0;
}
