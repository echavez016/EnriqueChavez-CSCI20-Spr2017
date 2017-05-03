/*
 Enrique Chavez 
 CSCI 20 
 May 2, 2017
4.0 Assignment - Program Flow
     
Create an appropriate class for this game.
Main function should have ALL of the input/output.
Should use an array and file input/output.

This program will read in student answers for a test and compare the answers to the corresponding answer key for the test.
1 point is awarded for each correct answer, omitted answers get 0 points, and incorrect answers deduct ¼ point.  
The program should output to the screen and a file the student’s name, list of missed questions, and overall grade on the exam.
*/
#include <iostream>      
#include <fstream>       
using namespace std; 

/*
class Grader{
    
    public:
            //function to get correct answers text file declare array 
            //function to get students answer declare array 
            // function to compare if else in this function 
            
    
    private:
    
    
    
    
};
*/





int main (){
 
    //input and output should go here 
      
     string name;
     
      
 
    ifstream studentanswers;
    studentanswers.open("studentanswers.txt");
    
    ifstream testAnswers;
    testAnswers.open("answerkey.txt");
    
    string Firstname; 
     string Lastname;
     string answerOne;
     string answertwo;
     string answerThree;
     int x = 18; 
     string multipleChoice[x]; 
     
      
      studentanswers >> Firstname >> Lastname >> multipleChoice[x] >> answerOne >> answertwo >> answerThree;
      
      cout<< Firstname << " "<< Lastname;
      
  

    cout <<answerOne << answertwo << answerThree << endl;
       
   
      
    studentanswers.close();
     testAnswers.close();
    
    
    return 0; 
    
}