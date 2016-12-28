#pragma once
#include<string>

class Card {

public:
	Card(std::string, int);
	void displayCard();
	~Card() = default;

protected:
	std::string name;
	int value;
};
