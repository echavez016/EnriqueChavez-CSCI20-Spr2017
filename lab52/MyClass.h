
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
 public:
    MyClass();
    void Output();
    void SetNumber(int num);
    int GetNumber();
 
 private:
    
    int num_;
};

#endif