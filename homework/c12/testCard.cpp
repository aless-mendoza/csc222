#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

int main(){
    Card three_of_clubs(1, 3);
    cout << "test 1" << endl;
    Card card(2, 10);
    cout << card.toString() << endl;

    cout << "test 2" << endl;
    Card card1(1, 11);
    Card card2(1, 11);
    if (card1 == card2) {
        cout << "Yup, that's the same card." << endl;
    }

    cout<< "test 3" << endl;
    Card card1(2, 11);
    Card card2(1, 11);

    if (card1 > card2) {
    cout << card1.to_string() << " is greater than " << card2.to_string();
    cout << endl;
}
    return 0;
}
