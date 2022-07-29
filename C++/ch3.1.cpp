#include <iostream>
using namespace std;

class Mycar {
protected:
	int dorNum;
	char color[30];

public:
	Mycar() {
		dorNum = 2;
		strcpy_s(color, 30, "black");
	}

	Mycar(int num, const char* color) {
		dorNum = num;
		strcpy_s(this->color, 30, color);
	}

	void showCarInfo() {
		cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color << endl;
	}

};

class MySunroofCar :public Mycar {
	bool bSunRoof;
	
public:
	MySunroofCar(int dormun, const char* color, bool broof) {
		Mycar::dorNum = dormun;
		strcpy_s(Mycar::color, 30, color);
		bSunRoof = broof;
	}

	bool isSunroof() {
		return bSunRoof;
	}

	void shorCarinfo() {
		cout << "�� ����:" << dorNum << ", �ڵ��� ����:" << color;
		if (bSunRoof)
			cout << " ������ ����" << endl;
		else
			cout << endl;
	}
};

//int main()
//{
//	Mycar car1(4, "white");
//	car1.showCarInfo();
//
//	Mycar car2(5, "red");
//	car2.showCarInfo();
//
//	MySunroofCar car3(3, "black", true);
//	car3.shorCarinfo();
//
//	return 0;
//}