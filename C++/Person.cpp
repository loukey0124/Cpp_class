#include <iostream>
using namespace std;

class Person {
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname) + 1, myname);
		age = myage;
	}

	~Person() {
		delete[]name;
		printf("deleted!");
	}

	void ShowPersonInfo() {
		cout << "ÀÌ¸§: " << name << ", " << age << endl;
	}
};

//int main()
//{
//	Person p1("kim", 19);
//	p1.ShowPersonInfo();
//
//	return 0;
//}