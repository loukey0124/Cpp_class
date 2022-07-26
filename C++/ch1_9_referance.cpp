#include <iostream>
using namespace std;

void ch1_9_1()
{
	int num1 = 1020;
	int& num2 = num1;

	num2 = 3047;
	cout << "VAL:" << num1 << endl;
	cout << "REF:" << num2 << endl;

	cout << "VAL:" << &num1 << endl;
	cout << "REF:" << &num2 << endl;
}

void SwapByRef(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void SwapByRef_main()
{
	int val1 = 10, val2 = 20;

	SwapByRef(val1, val2);
	cout << "val1:" << val1 << endl;
	cout << "val2:" << val2 << endl;
}

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

void RefRetFuncOne_main1()
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);

	num1++;
	num2++;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	cout << "num1 주소:" << &num1 << endl;
	cout << "num2 주소:" << &num2 << endl;
}

void RefRetFuncOne_main2()
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1++;
	num2++;
	num2++;
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	cout << "num1 주소:" << &num1 << endl;
	cout << "num2 주소:" << &num2 << endl;
}

void quiz1(int& num)
{
	num++;
}

void quiz1_main()
{
	int n = 1;
	quiz1(n);
	cout << "number:" << n << endl;
}

void quiz2(int& num)
{
	num = num * (-1);
}

void quiz2_main()
{
	int n = 3;
	quiz2(n);
	cout << "number:" << n << endl;
}

void quiz3()
{
	int num = 12;
	int* p = &num;
	int*(&ref) = p;

	cout << "REF:" << *ref << endl;
	cout << "POINT:" << *p << endl;
}

char* quiz4(int len)
{
	char* adr = new char[len];
	return adr;
}

void quiz4_main()
{
	int len = 10;
	char* str = quiz4(len);

	cout << "문자열을 입력하세용";
	cin >> str;
	cout << "입력한 문자열:" << str << endl;

	delete[]str;
}

typedef struct {
	int xpos;
	int ypos;
}Point;

Point& PntAdder(Point &p1, Point &p2)
{
	Point* p = new Point;
	p->xpos = p1.xpos + p2.xpos;
	p->ypos = p1.ypos + p2.ypos;
	
	return *p;
}

void PntAdder_main()
{
	Point* p1 = new Point;
	p1->xpos = 1;
	p1->ypos = 2;
	Point* p2 = new Point;
	p2->xpos = 3;
	p2->ypos = 4;
	Point &p3 = PntAdder(*p1, *p2);

	cout << "x좌표:" << p3.xpos << "\ny좌표:" << p3.ypos << endl;

	delete p1;
	delete p2;
	delete& p3;
}