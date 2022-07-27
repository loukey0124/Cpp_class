#include <iostream>
#include "MyCard.h"

MyCard::MyCard() {
	Shape = new char[10];
	strcpy_s(Shape, 6, "Spade");
	number = 1;
}

MyCard::~MyCard() {
	delete[] Shape;
}

void MyCard::ShowCard() const {
	std::cout << "모양:" << Shape << ", 번호:" << number << std::endl;
}

void MyCard::setCard(const char* Shape, int number) {
	strcpy_s(this->Shape, 10, Shape);
	this->number = number;
}

char* MyCard::getShape() {
	return Shape;
}

int MyCard::getnumber() {
	return number;
}