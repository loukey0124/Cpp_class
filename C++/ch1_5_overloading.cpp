#include <iostream>
using namespace std;

void MyFunc(void)
{
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(char c)
{
	cout << "MyFunc(char c) called" << endl;
}

void MyFunc(int a, int b)
{
	cout << "myFunc(int a, int b called" << endl;
}

void MyFunc_Test()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
}

int getSum(int a, int b) {
	return a + b;
}

double getSum(double a, double b)
{
	return a + b;
}

void quiz6_3()
{
	cout << getSum(10, 20) << endl;
	cout << getSum(1.1, 2.2) << endl;
}

void Swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}


void quiz6_4()
{
	char c1 = 'a', c2 = 'b';
	int i1 = 1, i2 = 2;
	double d1 = 0.5, d2 = 7.7;

	Swap(&c1, &c2);
	Swap(&i1, &i2);
	Swap(&d1, &d2);

	cout << "char: " << c1 << "," << c2 << endl;
	cout << "int: " << i1 << "," << i2 << endl;
	cout << "double: " << d1 << "," << d2 << endl;
}