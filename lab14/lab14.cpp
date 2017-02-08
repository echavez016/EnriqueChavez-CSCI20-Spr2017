
#include <iostream>
using namespace std;

int main() {
    
   double usersCents;
    int y;
    
    cout << "What is the Total amount of change you have in cents?" << endl;
    cin >> usersCents;
    
    y = usersCents;
    
    cout << "you have " <<y/25 << " quarters ";

    y = y % 25;

    cout << " , " << y/10 <<" dimes ";

    y = y % 10;

    cout << " , " << y/5 << " nickels ";

    y = y % 5;

    cout << " , " << y/1 << " pennies " << endl;
    
    //y = y;
    
    cout << "Your total is $0." << y << "After the fee you get in cash.";
    
    
    
    
    
    cout << "After my cut of 10.9% your total is  $" << usersCents << " in cash.";
    
  
   return 0;
}