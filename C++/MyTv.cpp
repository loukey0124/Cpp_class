#include <iostream>
using namespace std;

class MyTv {
public:
	int channel;
	bool power;
	char color[30];

	void powerOnOff() {
		power = !power;
	}

	void channelUp() {
		channel++;
	}

	void channelDown() {
		channel--;
	}
};

//int main()
//{
//	MyTv t1;
//	t1.channel = 7;
//	strcpy_s(t1.color, 30, "white");
//	cout << "ä��:" << t1.channel << "����:" << t1.color << endl;
//
//	MyTv t2;
//	t2.channel = 11;
//	strcpy_s(t2.color, 30, "red");
//	cout << "ä��:" << t2.channel << "����:" << t2.color << endl;
//
//	return 0;
//}