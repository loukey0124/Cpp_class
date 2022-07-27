#include <iostream>
using namespace std;

class Card {
private:
	char Shape[30];
	int number;

public:

	Card(const char* Shape, int number) {
		strcpy_s(this->Shape, 30, Shape);
		this->number = number;
	}

	void printCard() {
		cout << Shape << ", " << number << endl;
	}

	void setShape(const char* Shape) {
		strcpy_s(this->Shape, 30, Shape);
	}

	void setnumber(int number) {
		this->number = number;
	}

	char* getShape()
	{
		return Shape;
	}

	int getnumber()
	{
		return number;
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