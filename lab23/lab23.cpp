/*
 Enrique Chavez 
 CSCI 20 
 Feb 28, 2017
 2.3 Lab - Function Input
 
 //Here goes a description 
 
 
*/
#include <iostream>
#include <cstdlib> //needed to make random # 
#include <ctime>  //needed to make random # 
using namespace std;
 
 void RandomNumber (int largeNum, int smallNum, int x){ 
 
   int randNum = rand() % (smallNum + x) + 1;
 
   cout << randNum;
 
  return;
 }

void swap(int largeNum, int smallNum, int& x){
  
  x = smallNum;
  smallNum = largeNum;
  largeNum = x; 
  
   return;
}

 
 int main() {
   int largeNum, smallNum, x; 
   
  cout<<"enter number one (smallest)";
   cin >> smallNum;
   cout<<"enter number two (largest)"; 
   cin >> largeNum;
   
  RandomNumber (smallNum, largeNum, x);
  
   

   return 0;  
 };