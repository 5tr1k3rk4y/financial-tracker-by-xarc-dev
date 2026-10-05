#include <string>
#include <vector>

using namespace std;
struct category{

    // The name identifies this category, such as Food or Salary.
    string name;


    // Creates example categories and stores them in a local collection.
    int categoryUpdate(){ 

    string name = "Food"; //Creates a Variables
   

    //Object for the category
    category newCategory;
    category transportCategory;
    category salaryCategory;

    newCategory.name = name;
    transportCategory.name = "Tranport"; //Uses the variable name
    salaryCategory.name = "Salary";

    vector<category> mycategory;

    mycategory.push_back(newCategory);
    mycategory.push_back(salaryCategory);
    mycategory.push_back(transportCategory);
}
   
    
};
