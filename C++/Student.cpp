#include <iostream>
using namespace std;

class Student {
public:
	char name[30];
	int ban;
	int no;
	int kor;
	int eng;
	int math;

	int getTotal() {
		int total = 0;
		total += kor;
		total += eng;
		total += math;
		return total;
	}

	float getAverage() {
		int total = 0;
		total += kor;
		total += eng;
		total += math;
		return total / 3.0;
	}
};

//int main()
//{
//	Student p1;
//	strcpy_s(p1.name, 30, "ö��");
//	p1.kor = 80; p1.eng = 80; p1.math = 80;
//
//	cout << p1.name << " : ���� - " << p1.getTotal() << "��, ��� - " << p1.getAverage() << "��" << endl;
//
//	Student p2;
//	strcpy_s(p2.name, 30, "����");
//	p2.kor = 90; p2.eng = 95; p2.math = 85;
//	cout << p2.name << " : ���� - " << p2.getTotal() << "��, ��� - " << p2.getAverage() << "��" << endl;
//	
//	return 0;
//}