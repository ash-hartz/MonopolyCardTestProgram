#pragma once
#include "CardTest.h"
#include<algorithm>
#include<vector>
#include<string>

class Deck {

public:
	Deck(std::vector<Card>);
	//Deck Vector
	std::vector<Card> Cards;

	//Shuffle
	void shuffle();
};

