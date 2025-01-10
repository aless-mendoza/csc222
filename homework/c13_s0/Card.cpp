#include <string>
#include <iostream>
#include "Card.h"
using namespace std;

Card::Card() {
    suit = NONE; rank = JOKER;
}

Card::Card(Suit s, Rank r) {
    suit = s; rank = r;
}

Deck::Deck(int size){
    vector<Card> temp(size);
    cards = temp;
}

//functions

void Card::swap_cards(Card* a, Card* b){
    Card temp = *a;
    *a = *b;
    *b = temp;
}

string Card::to_string() const{
    vector<string> suit_strings = {"None", "Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    if (rank == 0) return rank_strings[rank];
        return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::operator==(const Card& c2) const{
    return (rank == c2.rank && suit == c2.suit);
}

bool Card::operator>(const Card& c2) const{
    if (suit > c2.suit) return true;
	if (suit < c2.suit) return false;
    if (rank > c2.rank) return true;
	if (rank < c2.rank) return false;

    return false;
}

bool Card::operator<(const Card& c2) const{
    if (suit > c2.suit) return false;
    if (suit < c2.suit) return true;
    if (rank > c2.rank) return false;
    if (rank < c2.rank) return true;
    return false;
}

bool Card::operator>=(const Card& c2) const{
    if (suit > c2.suit) return true;
    if (suit < c2.suit) return false;
    if (rank > c2.rank) return true;
    if (rank < c2.rank) return false;

    return (rank == c2.rank && suit == c2.suit);
}

bool Card::operator<=(const Card& c2) const{
    if (suit > c2.suit) return false;
    if (suit < c2.suit) return true;
    if (rank > c2.rank) return false;
    if (rank < c2.rank) return true;

    return (rank == c2.rank && suit == c2.suit);
}

bool Card::operator!=(const Card& c2) const{
    return (rank != c2.rank && suit != c2.suit);
}

vector<Card> build_deck(){
    vector<Card> deck(52);
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}

Deck::Deck(){
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = TWO; rank <= ACE; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}

void Deck::print() const{
    for (int i = 0; i < cards.size(); i++) {
        cout << cards[i].to_string() << endl;
    }
}

int Deck::find(const Card& card) const
{
    for (int i = 0; i < cards.size(); i++) {
        if (cards[i] == card) return i;
    }
    return -1;
}

int Card::find(const Deck& deck) const
{
    for (int i = 0; i < deck.cards.size(); i++) {
        if (deck.cards[i] == *this) return i;
    }
    return -1;
}
