//  Brandon Markham
//  main.cpp
//  Falling Distance
//
//  5/17/23.
//

#include <iostream>
#include <iomanip>

using namespace std;

double FallingDistance(double);
double FallingDistance2(double);
void DisplayTable();

int main() {
    double fallingTime;
    double fallingDistance;
   
    
    cout << "This program will calculate distance an object has fallen \nwhen the user enters the total number of seconds the object\nspent falling.\n\n"
         << "Enter the falling time in seconds\n\n";
    
    cin >> fallingTime;
    cout<<endl;
    
    while(!cin){
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Please enter time in seconds\n\n";
        cin >> fallingTime;
        cout<<endl;
    }
    
    fallingDistance = FallingDistance(fallingTime);
    cout << fixed << showpoint << setprecision(3);
    cout<< "The falling distance for an object that has fallen "
        << fallingTime << " seconds is " << fallingDistance
        << " meters.\n\n";
    
    for(double i = 1.0; i <= 10; i++){
        cout << "The falling distance for " << i << " seconds is: "<<FallingDistance(i)
        << "."
        << endl;
     
    }
   cout <<endl;
    
    DisplayTable();
    
    return 0;
}

double FallingDistance(double t){
    double g = 9.8;
    double fDistance = t*t*g*0.5;
    return fDistance;
}
double FallingDistance2(double t){
    double g = 9.8;
    double fDistance = t*t*g*0.5;
    return fDistance;
}
void DisplayTable(){
    double d;
    
    cout << "Data Table Format:\n"<<endl;
       
    
    cout <<"Time in Seconds       Distance Fallen in Meters"
         << endl
         << "-----------------------------------------------"
         << endl;
    cout << fixed << showpoint << setprecision(3);
    for(double i = 1; i<=10; i++){
        d = FallingDistance(i);
        cout << i << "s\t\t\t\t  " << d<<"m\n";
        
        
    }
}
