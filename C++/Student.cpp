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
//	strcpy_s(p1.name, 30, "Ã¶¼ö");
//	p1.kor = 80; p1.eng = 80; p1.math = 80;
//
//	cout << p1.name << " : ÃÑÁ¡ - " << p1.getTotal() << "Á¡, Æò±Õ - " << p1.getAverage() << "Á¡" << endl;
//
//	Student p2;
//	strcpy_s(p2.name, 30, "¿µÈñ");
//	p2.kor = 90; p2.eng = 95; p2.math = 85;
//	cout << p2.name << " : ÃÑÁ¡ - " << p2.getTotal() << "Á¡, Æò±Õ - " << p2.getAverage() << "Á¡" << endl;
//	
//	return 0;
//}