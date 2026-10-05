#include <iostream>
using namespace std;

struct date{
    // The three parts that make up a calendar date.
    int day;
    int month;
    int year;
    
    // Prints the date in day/month/year order.
    void myDateDisplay(){
        cout << day << "/" << month << "/" << year; 
    }

    // Displays this date while checking the leap-year rules for its year.
    int isLeapYear(){
        if (year % 400 == 0){ // Calculates if Year the year could Return 0 as a remainder
            myDateDisplay();
        }

        else if((year % 4 == 0) && (year % 100 != 0)){ //Calculates if the year could return 0 as a remainder if it does not return zero its niot a leap_year

             myDateDisplay();
        }

        else{
            myDateDisplay();
        }
    }


    // Returns February's length during a leap year.
    int TwentyNineyDaysMonth(){ //February leap year variables
        return 29;

        }
    // Returns the number of days in a thirty-day month.
    int thirtyDaysMonth(){ 
        //thirty days months variables
        return 30;
        }
    // Returns the number of days in a thirty-one-day month.
    int thirtyOneDaysMonth(){ 
        //Thirty one days Months variables
       return 31;
        
        }

    // Checks the date and displays it when the current checks allow it.
    bool isDateValid(){ //Checks if the date users input is valid

        //date validity
        date dateObject;

        if (dateObject.day < thirtyDaysMonth() || dateObject.day < 1 && dateObject.month < 12 || dateObject.month < 1 && dateObject.year < 2026 || dateObject.year < 9999){
            cout << "Invalid date,Cannot use past date,unknown day,month or year" << endl; //Checks if the date is invalid
        }

        else if (isLeapYear() == true && dateObject.month == TwentyNineyDaysMonth()){
            cout << "its Leap Year \n";
            myDateDisplay();
        }

        else {
            myDateDisplay();
        }

    } 

        };

