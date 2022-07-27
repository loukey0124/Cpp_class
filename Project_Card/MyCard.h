#pragma once

class MyCard {
private:
	char* Shape;
	int number;

public:
	MyCard();
	~MyCard();
	void ShowCard() const;
	void setCard(const char* Shape, int number);
	char* getShape();
	int getnumber();
};