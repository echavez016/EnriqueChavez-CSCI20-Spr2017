/*
 Enrique Chavez 
 CSCI 20 
 March 10, 2017
2.0 Assignment - Class Conversion Calculators
 
 
*/

    #include <iostream> 
    #include <string> 
    using namespace std;
    
     
     class DistaceConverter {
         public: 
            double GetInitialDistance ();
            void SetInitialDistance (double InchesV, double FeetV, double YardsV, double MilesV); 
            double convertToInches (double InchesV);
            double convertToFeet (double FeetV);
            double convertToYards (double YardsV);
            void PrintStuff (double InchesV, double FeetV, double YardsV): 
            
         private: 
           double initialDistance_; 
         
     };
     
     
     double DistaceConverter::GetInitialDistance (){
         
         return initialDistance_;
     }
     
     
     void DistaceConverter::SetInitialDistance (double InchesV, double FeetV, double YardsV){
         
         initialDistance_ = Distace;
         
         Distace = InchesV; 
         Distace = FeetV;  
         Distace = YardsV;  
     }
     
     
      double DistaceConverter::convertToInches (double InchesV){
          
          
         return Distace * 0.39 = InchesV;
     }
     
     
     
      double DistaceConverter::convertToFeet (double FeetV){
         
         return Distace / 30.48 = FeetV;
     }
     
     
      double DistaceConverter::convertToYards (double YardsV){
         
         return Distace * 0.010936132983377 = YardsV;
     }
     
     
     
     void DistaceConverter::PrintStuff (double InchesV, double FeetV, double YardsV){
         
         cout << "Please enter the distance in centemeters - " << endl;
         
         cin >> Distace; 
         
         cout <<"That is  " << InchesV << "Inches" << endl;
         
         cout <<"That is  " << FeetV << "Feet" << endl;
         
         cout <<"That is  " << YardsV << "Yards" << endl;
         
     }
     
     
     int main (){
         
         
         return 0;
     }