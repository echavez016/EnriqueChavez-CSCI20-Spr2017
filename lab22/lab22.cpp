/*
 Enrique Chavez 
 CSCI 20 
 Feb 23, 2017
 2.2 Lab - Writing Functions
 
 this program generates a random number(Using a function) between 1 & 100 then outputs it 
 
*/
#include <iostream>
#include <cstdlib> //needed to make random # 
#include <ctime>  //needed to make random # 
using namespace std;
 
 
 void RandomNumber (){
     
       cout <<  rand() % 100 + 1 << "."<< endl;  
 }
 
 int main() {
    
   
    srand(time(NULL));
   
   cout<<"Your Random Number is ";
     RandomNumber();  
   

   return 0;  
 };