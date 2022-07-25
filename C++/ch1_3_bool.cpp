#include<iostream>
using namespace std;

bool IsPositive(int num)
{
	if (0 > num)
		return false;
	else
		return true;
}

void ch1_3()
{
	bool isPos;
	int num;
	std::cout << "Input number: ";
	std::cin >> num;

	isPos = IsPositive(num);
	if (isPos)
		std::cout << "Positive number" << std::endl;
	else
		std::cout << "Negative number" << std::endl;
}