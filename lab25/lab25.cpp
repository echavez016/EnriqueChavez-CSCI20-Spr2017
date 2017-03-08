#include <iostream>
#include <string> 
using namespace std;

class Book{
    public: 
        void setTitle(string BookTitle); //mutator 
        void setAuthor(string BookAuthor); //mutator 
        void setCopyright(string BookCopyright); //mutator 
        void setYear(string BookYear); //mutator 
        
        string getTitle(); //accessor 
        string getAuthor(); //accessor 
        string getCopyright(); //accessor 
        string getYear(); //accessor 
    
    private:
    string title; 
    string Author; 
    string Copyright;
    string Year; 
};

//Title functions 
    void Book::setTitle(string BookTitle) {
    
        title = BookTitle; 
        } 
  
    string Book::getTitle() {
        
        return title; 
       }


//Author functions 
     void Book::setAuthor(string BookAuthor) {
         Author = BookAuthor;
         }

    string Book::getAuthor(){
        
        return Author; 
    }
    
    
//Copyright functions 
     void Book::setCopyright(string BookCopyright) {
         Copyright = BookCopyright;
         }

    string Book::getCopyright(){
        
        return Copyright; 
    }


//Year functions 
    void Book::setYear(string BookYear) {
    
        Year = BookYear; 
        } 
  
    string Book::getYear() {
        
        return Year; 
       }





    int main () {
        
   // Book Output;
        
    //Output.setTitle(); 
    //Output.setAuthor();  
    //Output.setCopyright();  
    //Output.setYear(); 
        
        

    
    
    
    
    
    return 0; 
    }


