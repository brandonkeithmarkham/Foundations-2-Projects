//  Brandon Markham
//  main.cpp
//  MPH Conversion
//
//  Created by Brandon Markham on 5/16/23.
//

          

#include <iostream>
#include <iomanip>
using namespace std;




int main() {
    const int START_KPH = 60,
              END_KPH = 130,
              INCREMENT = 10;
    
    const double CONVERSION_FACTOR = 0.6214;
    
    int kph;
    double mph;
    
    cout << fixed << showpoint << setprecision(1);
    
    cout << "KPH" << setw(12) << "MPH\n";
    cout << "---------------\n";
    
    for(kph = START_KPH; kph <= END_KPH; kph += INCREMENT){
        mph = kph * CONVERSION_FACTOR;
        
        cout << kph<< "\t\t   " << mph << endl;
    }
    
    
    return 0;
}
