/*
Enrique Chavez 
May 4, 2017 

5.1 Lab - Pointers

This program has the user enter a word that is 10 characters or less 
then it checks to see if its a Palindrome 
output example:
Please enter a 10 letter word or less
ana
your word is 
ana    
an       ! Question: Is this suposed to put put that an instead of ana was i suposed to fix that somewhere? !
It is a palindrome!




*/
#include <iostream> 
//#include <iostream> // ! this was declared twice !
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    
    char * name = new char[nameLength]; // ! this array was not declared right forgot to add thr length of the array  ! dont worry I fixed it 
    //stores the address of name
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name;//stores the address of head
    char * tail = name;//stores the address of tail
    nameLength = strlen(name); // function counts length of the C string
    string firststr; //! This was not declared ! dont worry I fixed it 

    cout << "Your word is " << firststr << endl;

    if (nameLength<=10) // ! This program indicates that the user can enter a word thats ten or less but it did not use a <= so the user was only alloud 9 characters ! I fixed it 
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1]; //function counts length of the C string and subtracts 1
        //it points to name 

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
                 
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];  //function counts length of the C string and subtracts 1 
            //it points to name 
    head++;
    tail--;
    

     if (*head == *tail) // checks if it is a palindrome
     {
         cout << "It is a palindrome!" << endl;  //! I dont know if this counts but it should be a palindrome instead of an palindrome !
     }
     else
     {
         cout << "It is not a palindrome" << endl;
     }

     return 0; 
    
}

