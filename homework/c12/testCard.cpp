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
    return 0;
}
