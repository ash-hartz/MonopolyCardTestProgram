#include "CardTest.h"
#include "Deck.h"
#include<iostream>
#include<vector>

using namespace std;

int main() {
	//Card Lists
	//Community Chest
	Card CC1("Advance to Go and collect $200.", 0);
	Card CC2("Bank error in your favor. Collect $200.", 200);
	Card CC3("Doctor's fee. Pay $50.", 50);
	Card CC4("Your stock sold. Collect $50.", 50);
	Card CC5("Get out of jail free. Use this card from your inventory to get out of jail.", 0);
	Card CC6("Go directly to Jail. Do not collect $200 if you pass Go.", 0);
	Card CC7("Grand opera opening night. Collect $50 from each player for tickets.", 0);
	Card CC8("Your holiday fund matures. Collect $100.", 100);
	Card CC9("Income tax refund. Collect $200.", 200);
	Card CC10("It's your birthday! Collect $10.", 10);
	Card CC11("Your life insurance matures. Collect $100.", 100);
	Card CC12("Hospital fees. Pay $100.", 100);
	Card CC13("School fees. Pay $150.", 150);
	Card CC14("You receive a consultancy fee. Collect $25.", 25);
	Card CC15("Pay for street repairs. $40 per house. $115 per hotel.", 0);
	Card CC16("You have won second place in the beauty competition. Collect $10.", 10);
	Card CC17("Inheritance. Collect $100.", 100);
	Card CC18("You have gained a railroad ticket. Use this card in your inventory to advance to the nearest railroad.", 0);
	Card CC19("You have gained a Go ticket. Use this ticket in your inventory to advance to go and collect $200.", 0);
	Card CC20("You have gained a Restraining Order. Use this card from your inventory to send another player to jail.", 0);


	//Chance
	Card Chance1("Advance to Go. Collect $200.", 0);
	Card Chance2("Advance to Illinois Avenue. Collect $200 if you pass Go.", 0);
	Card Chance3("Advance to St. Charles Place. Collect $200 if you pass Go.", 0);
	Card Chance4("Advance to the nearest utility.", 0);
	Card Chance5("Advance to the nearest railroad and pay its owner twice the amount of rent.", 0);
	Card Chance6("The bank pays you your dividends. You gain $50.", 50);
	Card Chance7("Get out of Jail free. Use this card from your inventory to get out of jail.", 0);
	Card Chance8("Go back 3 spaces.", 0);
	Card Chance9("Go straight to Jail. Do not collect $200 if you pass Go.", 0);
	Card Chance10("Pay for general property repairs for your repair. $50 per property.", 0);
	Card Chance11("Poor tax. Pay $15.", 15);
	Card Chance12("Take a trip to Reading Railroad.", 0);
	Card Chance13("Take a walk on Boardwalk.", 0);
	Card Chance14("You've been elected Chairman. Pay each player $50.", 0);
	Card Chance15("Your building and loan matures. Collect $150.", 150);
	Card Chance16("You've won a crossword competition. Collect $100", 100);
	Card Chance17("You've gained a railroad ticket. Use this card from your inventory to advance to the nearest railroad.", 0);
	Card Chance18("You've gained a Go ticket. Use this card from your inventory to go directly to Go and collect $200.", 0);
	Card Chance19("You've gained a Restraining order card. Use this card from your inventory to send another player to jail.", 0);
	Card Chance20("", 0);

	vector<Card> CCDeck;

	CCDeck.push_back(CC1);
	CCDeck.push_back(CC2);
	CCDeck.push_back(CC3);
	CCDeck.push_back(CC4);
	CCDeck.push_back(CC5);
	CCDeck.push_back(CC6);
	CCDeck.push_back(CC7);
	CCDeck.push_back(CC8);
	CCDeck.push_back(CC9);
	CCDeck.push_back(CC10);
	CCDeck.push_back(CC11);
	CCDeck.push_back(CC12);
	CCDeck.push_back(CC13);
	CCDeck.push_back(CC14);
	CCDeck.push_back(CC15);
	CCDeck.push_back(CC16);
	CCDeck.push_back(CC17);
	CCDeck.push_back(CC18);
	CCDeck.push_back(CC19);
	CCDeck.push_back(CC20);

	vector<Card> ChanceDeck;

	ChanceDeck.push_back(Chance1);
	ChanceDeck.push_back(Chance2);
	ChanceDeck.push_back(Chance3);
	ChanceDeck.push_back(Chance4);
	ChanceDeck.push_back(Chance5);
	ChanceDeck.push_back(Chance6);
	ChanceDeck.push_back(Chance7);
	ChanceDeck.push_back(Chance8);
	ChanceDeck.push_back(Chance9);
	ChanceDeck.push_back(Chance10);
	ChanceDeck.push_back(Chance11);
	ChanceDeck.push_back(Chance12);
	ChanceDeck.push_back(Chance13);
	ChanceDeck.push_back(Chance14);
	ChanceDeck.push_back(Chance15);
	ChanceDeck.push_back(Chance16);
	ChanceDeck.push_back(Chance17);
	ChanceDeck.push_back(Chance18);
	ChanceDeck.push_back(Chance19);
	ChanceDeck.push_back(Chance20);


	Deck CommunityChest(CCDeck);
	Deck Chance(ChanceDeck);
	
	CommunityChest.shuffle();
	Chance.shuffle();

	int input;

	cout << "1. CC Deck" << endl;
	cout << "2. Chance Deck" << endl;
	cin >> input;

	if (input == 1) {
		for (auto &card : CommunityChest.Cards) {
			card.displayCard();
		}
	}
	else if (input == 2) {
		for (auto &card : Chance.Cards) {
			card.displayCard();
		}
	}
	else {
		cout << "Error" << endl;
	}
	system("pause");
}




