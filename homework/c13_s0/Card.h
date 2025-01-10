using namespace std;
//enum creates a user made data type that allows you to create a custom list
enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING};

struct Deck {

    Deck(int n);
    Deck();

    void print() const;
};

struct Card{
    Rank rank;
    Suit suit;

    //constructors
    Card();
    Card(Suit s, Rank r);

    //functions
    bool operator==(const Card&) const;
    bool operator>(const Card&) const;
    bool operator<(const Card&) const;
    bool operator>=(const Card&) const;
    bool operator<=(const Card&) const;
	bool operator!=(const Card&) const;

    string to_string() const;
    void swap_cards(Card* a, Card* b);
    int find(const Deck& deck) const;
};

vector<Card> build_deck();

