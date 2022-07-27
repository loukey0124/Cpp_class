#include <iostream>
using namespace std;

class SimpleClass {
	int num1;
	int num2;

public:
	SimpleClass() {
		num1 = 0;
		num2 = 0;
	}

	SimpleClass(int n) {
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2) {
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const {
		cout << num1 << ' ' << num2 << endl;
	}
};

//int main()
//{
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//
//	SimpleClass* ptr1 = new SimpleClass;
//	ptr1->ShowData();
//
//	SimpleClass* ptr2 = new SimpleClass(100, 200);
//	ptr2->ShowData();
//
//	delete ptr1;
//	delete ptr2;
//
//	return 0;
//}