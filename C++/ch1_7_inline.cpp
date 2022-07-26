#include <iostream>
using namespace std;

#define  SQUARE(a) a*a

void macro()
{
	cout << SQUARE(5) << endl;
	cout << SQUARE(3.3) << endl;
}

inline int Square(int a)
{
	return a * a;
}

void Square_main()
{
	cout << Square(5) << endl;
	cout << Square(3.3) << endl;
}