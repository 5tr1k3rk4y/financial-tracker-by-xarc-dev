#include "category.hpp"
#include "date_utils.hpp"
using namespace std;
// Stores the information used to describe a budget entry.

struct budget{
    // Category and date describe what the budget entry is about.
    category newcategory;//newCategory is the name of the object category
    date mydate;

    // Money values are kept as whole cents to avoid fractional cents.
    int cents; // Cents will be converted to whole numbers with decimals 
    // Keeps track of how much of this budget has been spent.
    int spent;// Placeholder for the calculation in transactions
    
    // Displays the date associated with this budget entry.
    void budgetUpdate(){
    mydate.myDateDisplay();
}
    
};
