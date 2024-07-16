#include <iostream>
#include<vector>
#include<string>
#include "Fridge.h" //include the header class for fridge

using namespace std;

//Constructor
Fridge::Fridge(string myItem, string fridgeName) {
	if (int(myItem.size()) > 0 && myItem.at(0) != ' ') {
		setInventory(myItem);
	}
	else {
		cout << "Not a valid item name." << endl;
	}
	if (int(fridgeName.size()) > 0 && fridgeName.at(0) != ' ') {
		myFridge = fridgeName;
	}
	else {
		cout << "Not a valid fridge name." << endl;
	}

	myFridge = fridgeName;
}

void Fridge::setInventory(string myItem) {
	inventory.push_back(myItem);
	//cout << "ITEM PUSHED BACK!!!!" << endl;
}

void Fridge::printFridge() {
	cout << "Here's what we have in the " << myFridge << " today: " << endl;
	cout << endl;
	for (int i = 0; i < int(inventory.size()); i++) {
		if (inventory.size() > 0) {
			cout << "Item " << i + 1 << " is: " << inventory.at(i) << endl;
			cout << endl;
		}
		else {
			cout << "Sorry, the " << myFridge << "is empty." << endl;
		}

	}

}

string Fridge::getItem(int index) {
	if (index > 0) {
		return inventory.at(index - 1);
		//returns 0 or a positive number
	}
	else {
		return inventory.at(index);
		//returns 0
	}
	
	//returns a string
}

void Fridge::deleteInventory(string myItem) {
	bool myItemIsInList = false;
	for (int i = 0; i < int(inventory.size()); i++) {
		if (inventory.at(i) == myItem) {
			myItemIsInList = true;
		}
	}
	if (myItemIsInList) {
		for (int t = 0; t < int(inventory.size()); t++) {
			if (inventory.at(t) == myItem) {
				cout << inventory.at(t) << " erased!  Print the contents of the fridge to check." << endl;
				inventory.erase(inventory.begin() + t);
			}
		}
	}
	else {
		cout << "Sorry, the item is not in the list, and so it cannot be erased." << endl;
	}
}

int Fridge::getNumItems() {
	return int(inventory.size());
}



