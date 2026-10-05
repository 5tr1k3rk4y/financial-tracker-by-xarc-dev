#include <iostream>
#include <vector>
#include "transaction.hpp"
#include "date_utils.hpp"
#include <string>

using namespace std;

struct ledger{

    int balance = 0; // Starting balance
    int total_income = 0; //Income where User gets salary,donations or any money recieved
    int total_expenses = 0; //Any amount of money the user spends

    transactions displayNewLegderTransactions;

    // Displays the transaction's date, category, type, and amount from tranaction.hpp
    void displayLedgerTransactions(){
       
    }

    void ledgerCaculations(){

        int expenseCalculations = balance - total_expenses; //Should update the balance after expenditure
        int incomeCalculations = balance + total_income;//Should upfate balance after income
    }




    
    
};