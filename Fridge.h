#pragma once
#ifndef FRIDGE_H
#define FRIDGE_H
//end safeguards
//declare the outer class symbols

//Include stuff
#include<iostream>
#include<vector>
#include <string>
#include<cmath>
using namespace std;

class Fridge {
	/*CONSTRUCTOR*/
public:
	Fridge(string myItem, string fridgeName);

	/*SETTER*/
	void setInventory(string myItem);
	void deleteInventory(string myItem);
	
	/*GETTER*/
	string getItem(int index);
	void printFridge();
	int getNumItems();

private:
	vector<string> inventory;
	string myFridge;
};



//closing safeguard
#endif
