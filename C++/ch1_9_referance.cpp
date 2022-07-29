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

void func1_9_2_1() {
	char c1 = 'A';
	char& ref1 = c1;
	char& ref2 = c1;

	cout << c1 << endl;
	cout << ref1 << endl;

	ref2++;

	cout << c1 << endl;
	cout << ref1 << endl;
}

void func1_9_2_2() {
	double d = 3.1;
	double& ref = d;

	cout << d << endl;
	cout << ref << endl;

	cout << &d << endl;
	cout << &ref << endl;
}

void increVal(int& val) {
	val++;
}

void convVal(int& val) {
	val = -val;
}

void test_incre_conv() {
	int num = 1;

	increVal(num);
	cout << num << endl;

	convVal(num);
	cout << num << endl;
}

void swap(int& n1, int& n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void test_swap() {
	int n1 = 10, n2 = 30;

	cout << "BEFORE:" << n1 << ", " << n2 << endl;
	swap(n1, n2);
	cout << "AFTER:" << n1 << ", " << n2 << endl;
}

typedef struct {
	char name[100];
	int kor;
	int eng;
}STUDENT;

void setStudent(STUDENT& s, char* name, int kor, int eng) {
	strcpy_s(s.name, 100, name);
	s.kor = kor;
	s.eng = eng;
}

void test_setStudent() {
	STUDENT s;
	char name[100];
	int k, e;
	cout << "이름 입력:";
	cin >> name;
	cout << "국어 점수 입력:";
	cin >> k;
	cout << "영어 점수 입력:";
	cin >> e;

	setStudent(s, name, k, e);

	cout << "이름:" << s.name << " 국어:" << s.kor << " 영어:" << s.eng << endl;
}

typedef struct {
	char Shape[100];
	int number;
}CARD;

void setcard(CARD& c, const char* name, int num) {
	strcpy_s(c.Shape, 100, name);
	c.number = num;
}

void testsetcard() {
	CARD card;
	setcard(card, "Diamond", 10);
	cout << "모양:" << card.Shape << " 번호:" << card.number << endl;
}

class Tv {
private:
	int volumn;
	int channel;

public:
	void setChannel(int c) {
		channel = c;
	}

	void setVolumn(int v) {
		volumn = v;
	}

	void showInfo() {
		cout << channel << ", " << volumn << endl;
	}
};

void setTv(Tv& t, int c, int v) {
	t.setChannel(c);
	t.setVolumn(v);
}

void testsetTv() {
	Tv tv;

	setTv(tv, 10, 5);
	tv.showInfo();
}