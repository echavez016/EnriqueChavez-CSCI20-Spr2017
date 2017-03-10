/*
 Enrique Chavez 
 CSCI 20 
 March 9, 2017
2.6 Lab - Classes and Constructors
 
 
*/
     
     #include <iostream> 
     #include <string> 
     using namespace std;
     
     
     
     class TemperatureConverter {
         
             private:
        
            double kelvin_;
        
        public:
            TemperatureConverter (); //default constructor
            TemperatureConverter (double CelsiusValue, double KelvinValue); //second constructor 
            
            void SetTempFromKelvin(double KelvinValue); // Mutator
            void SetTempFromCelsius(double CelsiusValue); // Mutator
            void SetTempFromFahrenheit(double FahrenheitValue); // Mutator
            
            double GetTempFromKelvin(); // Accessor
            double GetTempAsCelsius(); // Accessor
            double GetTempAsFahrenheit(); // Accessor
            
            void print();  
           
    
     };
 
     TemperatureConverter::TemperatureConverter (){  //default constructor
         kelvin_ = 0;
     } 
     
     TemperatureConverter::TemperatureConverter (double CelsiusValue, double KelvinValue){  //default constructor
         KelvinValue = CelsiusValue + 273.15;
     } 
     

     void TemperatureConverter::SetTempFromKelvin(double KelvinValue){
        KelvinValue = kelvin_; 
          
     }
     
     void TemperatureConverter::SetTempFromCelsius(double CelsiusValue){
        
         kelvin_ = CelsiusValue + 2733.15; 
     }
     
     void TemperatureConverter::SetTempFromFahrenheit(double FahrenheitValue){
        
         kelvin_ = (5 * (FahrenheitValue -32)/9) + 273.15; 
     }
     
    double TemperatureConverter::GetTempFromKelvin(){
        return kelvin_;  
    }
     
      double TemperatureConverter::GetTempAsFahrenheit(){
        return FahrenheitValue; 
    }
    
      double TemperatureConverter::GetTempAsCelsius(){
        return CelsiusValue; 
    }
    
     
     
     
    int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrdoubleTemperatures();
    temp2.PrdoubleTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrdoubleTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrdoubleTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrdoubleTemperatures();
    
    return 0;
}