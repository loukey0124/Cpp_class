#include <iostream>
using namespace std;

class MyCar {
private:
	char color[30];
	int dorNum;

public:
	void showCarInfo() {
		cout << "문 개수:" << dorNum << " ,자동차 색깔:" << color << endl;
	}

	void setDorNum(int num) {
		dorNum = num;
	}

	void setcolor(const char* c) {
		strcpy_s(color, 30, c);
	}
};

int main()
{
	MyCar car1;
	car1.setcolor("white");
	car1.setDorNum(3);

	MyCar car2;
	car2.setcolor("black");
	car2.setDorNum(5);

	car1.showCarInfo();
	car2.showCarInfo();

	return 0;
}