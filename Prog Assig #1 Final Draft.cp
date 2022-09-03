//Brandon Markham uzy7@txstate.edu
//Colloaborated with Wyatt Sheffield
//06/04/22
//Programming Assignment 1


#include <iostream>
#include <iomanip>


using namespace std;

//Struct Definintion.
struct Country_Data
{
  string countryName;
  int goldMedals;
  int silverMedals;
  int bronzeMedals;
};

//Constant integer to store array size.
const int SIZE = 8;

//Function to output table.
void showResults(struct Country_Data country[]);

//Function to increment medals as input by user.
void addMedal(struct Country_Data country[], int, char);

//Function to return total medals awarded to all countries.
int totalMedals(struct Country_Data country[]);

//Function to find country with most gold medals.
int mostMedals(struct Country_Data country[]);


int main() {
    
    //Struct array declaration.
    Country_Data country[SIZE];
    
    int countryNumber;
    char medalType;
    
    
    //Country 1 data.
    country[0].countryName = "Australia";
    country[0].goldMedals = 11;
    country[0].silverMedals = 14;
    country[0].bronzeMedals = 12;
    
    //Country 2 data.
    country[1].countryName = "Canada";
    country[1].goldMedals = 5;
    country[1].silverMedals = 0;
    country[1].bronzeMedals = 1;
    
    //Country 3 data.
    country[2].countryName = "China";
    country[2].goldMedals = 9;
    country[2].silverMedals = 14;
    country[2].bronzeMedals = 11;
    
    //Country 4 data.
    country[3].countryName = "Great Britain";
    country[3].goldMedals = 8;
    country[3].silverMedals = 4;
    country[3].bronzeMedals = 8;
    
    //Country 5 data.
    country[4].countryName = "Japan";
    country[4].goldMedals = 8;
    country[4].silverMedals = 10;
    country[4].bronzeMedals = 10;
    
    //Country 6 data.
    country[5].countryName = "Netherlands";
    country[5].goldMedals = 7;
    country[5].silverMedals = 6;
    country[5].bronzeMedals = 7;
    
    //Country 7 data.
    country[6].countryName = "Russia";
    country[6].goldMedals = 6;
    country[6].silverMedals = 10;
    country[6].bronzeMedals = 8;
    
    //Country 8 data.
    country[7].countryName = "USA";
    country[7].goldMedals = 10;
    country[7].silverMedals = 6;
    country[7].bronzeMedals = 7;
   
   
    
    //Do while loop to prompt user for country number, and then runs program to
    //increment the medal type for country chosen by user.
    do{
        //Function call for table display data.
        showResults(country);
        cout << "Enter the country number (0 to quit):"<< endl;
        cin  >> countryNumber;
        
    //Branching statement to execute if user selects 0.
    if (countryNumber == 0){
        
        //Function call to total all medals awarded.
        cout << "Total medals Awarded: "<< totalMedals(country)
             << endl;
        cout << "Country with the most Gold Medals: "
             << country[mostMedals(country)].countryName << endl;
    }
        
    else if(countryNumber >= 0){
            cout << "Enter the medal type (G,S, or B):" << endl;
            cin  >> medalType;
        
            //Function call to increment medals.
            addMedal(country, countryNumber, medalType);
    }
        
    }while(countryNumber != 0);
 
    return 0;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Function Name: showResults - Function takes struct array data from program and
* outputs the data in table format.
*
* The parameter is a struct containing a string for the name of the country, and
* 3 int variables to store the number of medals (Gold, Silver, Bronze) awarded.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void showResults(struct Country_Data country[]){
    cout << left
         << setw(3)   << "N"
         << setw(15)  << "Country"
         << right
         << setw(10)  << "Gold"
         << setw (10) << "Silver"
         << setw (10) << "Bronze"
         << setw(10)  << "Total"
         << endl;
    
    for(int i = 0; i<SIZE; i++){
       cout << left
            << setw (3)  << i+1
            << setw (15) << country[i].countryName
            << right
            << setw (10) << country[i].goldMedals
            << setw (10) << country[i].silverMedals
            << setw (10) << country[i].bronzeMedals
            << setw (10) << country[i].goldMedals
                           +country[i].silverMedals
                           +country[i].bronzeMedals
            << endl;
        
    }
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Function Name: totalMedals - Function iterates through a for loop to total
* all the medals awarded to the participating countries.
*
* The parameter is a struct containing a string for the name of the country, and
* 3 int variables to store the number of medals (Gold, Silver, Bronze) awarded.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

int totalMedals(struct Country_Data country[]){
    int total=0;
    
    for(int i =0; i<SIZE; ++i){
        total+= country[i].goldMedals
               +country[i].silverMedals
               +country[i].bronzeMedals;
    }
    return total;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Function Name: mostMedals - This function creates a max variable and an index
* variable and uses a for loop to iterate through the struct array and locate
* the max value and the index at which it occurs.
*
* The parameter is a struct containing a string for the name of the country, and
* 3 int variables to store the number of medals (Gold, Silver, Bronze) awarded.
*
* The return type is of type int. The function returns the value for the struct
* array index for the country that was awarded the most gold medals.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

int mostMedals(struct Country_Data country[]){
    int max = country[0].goldMedals;
    int max_index = 0;
    
    for (int i = 0; i<SIZE; ++i){
        if(max < country[i].goldMedals){
           max = country[i].goldMedals;
           max_index = i;
        }
        
    }
    return max_index;
    
}
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Function Name: addMedal - This function uses branching with logical operators
* to determine input and increment the medal count for the appropriate country.
*
* Parameter 1 is a struct containing a string for the name of the country, and
* 3 int variables to store the number of medals (Gold, Silver, Bronze) awarded.
*
* Parameter 2 is an integer value that lets the program know which country to
* add the increment the medal for.
*
* Parameter 3 is a char variable type that tells the program what type of medal
* to increment.
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
void addMedal(struct Country_Data country[], int countryNumber, char medalType){
    if(medalType == 'G' || medalType == 'g'){
        country[countryNumber-1].goldMedals +=1;
    }
    else if(medalType == 'S' || medalType == 's'){
        country[countryNumber-1].silverMedals +=1;
    }
    else if(medalType == 'B' || medalType == 'b'){
        country[countryNumber-1].bronzeMedals +=1;
    }
}
