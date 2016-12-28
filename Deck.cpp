#include"CardTest.h"
#include"Deck.h"
#include<vector>
#include<algorithm>

using namespace std;

Deck::Deck(vector<Card> v) {
	this->Cards = v;
}

void Deck::shuffle() {
	random_shuffle(this->Cards.begin(), this->Cards.end());
}
