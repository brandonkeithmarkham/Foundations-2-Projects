//  Brandon Markahm
//  main.cpp
//  Winning Division
//  05/16/2023
//
//

#include <iostream>
#include <iomanip>

using namespace std;

double GetSales(string);
void FindHighest(double, double, double, double);


int main() {
    
    string nw = "Northwest",
           ne = "Northeast",
           sw = "Southwest",
           se = "Southeast";
    
    double nwSales,
           neSales,
           swSales,
           seSales;
    
   nwSales = GetSales(nw);
   neSales = GetSales(ne);
   swSales = GetSales(sw);
   seSales = GetSales(se);
   
   FindHighest(nwSales, neSales, swSales, seSales);
    
    
    return 0;
}

double GetSales(string district){
    
    double salesValue;
    
    cout << "Enter the quarterly sales for the " << district << " divison.\n";
    cin>> salesValue;
    
    while(!cin){
        cin.clear();
        cin.ignore(100, '\n');
        cout<<"Please enter valid input.\n";
        cin>>salesValue;
    }
    
    return salesValue;
}
void FindHighest(double nwS, double neS, double swS, double seS){
    
    if(nwS>neS && nwS>swS && nwS>seS){
        cout << fixed << setprecision(2);
        cout << "The Northwest division had the highest sales coming in at\n$"
             << nwS << endl;
    }
    
    else if(neS>nwS && neS>swS && neS>seS){
        cout << fixed << setprecision(2);
        cout << "The Northeast division had the highest sales coming in at\n$"
             << neS << endl;
    }
    
    else if(swS>nwS && swS>neS && swS>seS){
        cout << fixed << setprecision(2);
        cout << "The Southwest division had the highest sales coming in at\n$"
        << swS << endl;
    }
    
    else if(seS>nwS && seS>neS && seS>swS){
        cout << fixed << setprecision(2);
        cout << "The Southeast division had the highest sales coming in at\n$"
             << seS<<endl;
    }
}
