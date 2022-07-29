#include <iostream>
using namespace std;

class Card {
public:
    char Shape[30];
    int number;

public:
    Card(const char* str, int number) {
        strcpy_s(Shape, 30, str);
        this->number = number;
    }
    void printCard() {
        cout << Shape << ", " << number << endl;
    }
};

Card& setCard() {
    char shape[30];
    int number;
    
    cout << "모양 입력:";
    cin >> shape;
    cout << "숫자 입력:";
    cin >> number;

    Card* c = new Card(shape, number);

    return *c;
}

void test3() {
    Card &card = setCard();
    card.printCard();

    delete &card;
}

int main()
{
    test3();
}