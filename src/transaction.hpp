#include <iostream>
#include <string>
#include "category.hpp"
#include "date_utils.hpp"

struct transactions{
    // Identifies whether a transaction adds income or records an expense.
    enum class transactionType{
        income,expense //two choices are allowed 
    };
    // The transaction amount.
    int amount;

    // The category, date, and type describe this transaction.
    category transCategory; 
    date transDate;
    transactionType newTransactionType;

    // Displays the transaction's date, category, type, and amount.
    void displayTransections(){
        transDate.myDateDisplay();
        transCategory.categoryUpdate();
        if (newTransactionType == transactionType::income){
            cout << "income" << amount << endl;
        
        }
        else if (newTransactionType == transactionType::expense){
            cout << "Expense" << amount << endl;

        }
    

    }

    
};