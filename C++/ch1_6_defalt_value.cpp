#include <iostream>
using namespace std;

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

void Adder_main()
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;
}

int Adder2(int num1 = 1, int num2 = 2);

void Adder_main2()
{
	cout << Adder() << endl;
	cout << Adder(5) << endl;
	cout << Adder(3, 5) << endl;
}

int Adder2(int num1, int num2)
{
	return num1 + num2;
}

int BoxVolume(int length, int width = 1, int height = 1)
{
	return length * width * height;
}

void BoxVoulme_main()
{
	cout << "[3, 3, 3]:" << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D]:" << BoxVolume(5, 5) << endl;
	cout << "[7, D, D]:" << BoxVolume(7) << endl;
	//cout << "[D, D, D]:" << BoxVolume() << endl;//ERROR
}

int BoxVolume2(int length, int width, int height)
{
	return length * width * height;
}

int BoxVolume2(int length, int width)
{
	return length * width * 1;
}

int BoxVolume2(int length)
{
	return length * 1 * 1;
}

void BoxVoulme_main2()
{
	cout << "[3, 3, 3]:" << BoxVolume2(3, 3, 3) << endl;
	cout << "[5, 5, D]:" << BoxVolume2(5, 5) << endl;
	cout << "[7, D, D]:" << BoxVolume2(7) << endl;
	//cout << "[D, D, D]:" << BoxVolume() << endl;//ERROR
}

void main()
{
	BoxVoulme_main();
}