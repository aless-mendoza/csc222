using namespace std;
//enum creates a user made data type that allows you to create a custom list
enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING};


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
    void swapCards(Card* a, Card* b);
};

struct Deck {
    vector<Card> cards;

    Deck(int n);
    Deck();

    int find(const Deck& deck) const;
    void print() const;
};

vector<Card> build_deck();

