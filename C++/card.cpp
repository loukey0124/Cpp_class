#include <iostream>
using namespace std;

class Card {
public:
	char Shape[30];
	int number;

	void printCard() {
		cout << Shape << ", " << number << endl;
	}
};

//int main()
//{
//	Card c1;
//	strcpy_s(c1.Shape, 30, "Diamond");
//	c1.number = 7;
//	Card c2;
//	strcpy_s(c2.Shape, 30, "Heart");
//	c2.number = 3;
//	Card c3;
//	strcpy_s(c3.Shape, 30, "Clover");
//	c3.number = 11;
//
//	c1.printCard();
//	c2.printCard();
//	c3.printCard();
//
//	return 0;
//}