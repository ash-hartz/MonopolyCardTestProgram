#include "CardTest.h"
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

Card::Card(string n, int val) {
	this->name = n;
	this->value = val;
}

void Card::displayCard() {
	cout << "You draw a card. It reads: " << this->name << endl;
}