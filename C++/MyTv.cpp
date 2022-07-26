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
//	cout << "Ã¤³Î:" << t1.channel << "»ö±ò:" << t1.color << endl;
//
//	MyTv t2;
//	t2.channel = 11;
//	strcpy_s(t2.color, 30, "red");
//	cout << "Ã¤³Î:" << t2.channel << "»ö±ò:" << t2.color << endl;
//
//	return 0;
//}