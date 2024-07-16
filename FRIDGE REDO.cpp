// FRIDGE REDO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include "Fridge.h"
#include "Fridge.cpp"
using namespace std;

int main()
{
    string fridgeName = "Dorm Fridge";
    Fridge DormFridge("string cheese", fridgeName);
    
   
    vector<string> addFridgeContents;
    
    addFridgeContents.push_back("salsa");
    addFridgeContents.push_back("orange juice");
    addFridgeContents.push_back("cheddar cheese");
    addFridgeContents.push_back("tofu");
    addFridgeContents.push_back("lettuce");
    addFridgeContents.push_back("coffee cake");
    addFridgeContents.push_back("apples");
    
    for(int i = 0; i < int(addFridgeContents.size()); i++) {
 
        DormFridge.setInventory(addFridgeContents.at(i));
    }
   
    cout << "Printing the contents of the fridge: " << endl;
    cout << endl;
    DormFridge.printFridge();
    cout << endl;

    cout << "The 3rd item in the fridge is: " << DormFridge.getItem(3) << "! " << endl;
    cout << endl;
    cout << "The cheddar cheese is all gone.  It needs to be deleted from the fridge." << endl;
    cout << endl;
    DormFridge.deleteInventory("cheddar cheese");
    DormFridge.printFridge();
    cout << endl;
    cout << "How many items are in the fridge?  There are " << DormFridge.getNumItems() << " items." << endl;
    cout << endl;
    DormFridge.deleteInventory("apples");
    cout << "After deleting apples, there are " << DormFridge.getNumItems() << " items in the fridge." << endl;
    cout << endl;
    cout << "Making a new fridge, called large fridge." << endl;
    cout << endl;
    Fridge LargeFridge("carrots", "Large Fridge");
    vector<string> largeFridgeContents;
    largeFridgeContents.push_back("cherries");
    largeFridgeContents.push_back("watermelons");
    largeFridgeContents.push_back("sliced cucumbers");
    cout << "Printing the contents of the large fridge: ";
    for (int o = 0; o < int(largeFridgeContents.size()); o++) {
        LargeFridge.setInventory(largeFridgeContents.at(o));
    }
    LargeFridge.printFridge();
    cout << endl;
    cout << "Dorm fridge contents are: " << endl;
    DormFridge.printFridge();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
