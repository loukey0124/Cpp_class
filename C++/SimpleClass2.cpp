#include <iostream>
using namespace std;

class SimpleClass {
	int num1;
	int num2;

public:
	SimpleClass(int n1 = 0, int n2 = 0) {
		num1 = n1;
		num2 = n2;
	}

	void ShowData() {
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
//	return 0;
//}