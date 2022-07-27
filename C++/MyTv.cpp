#include <iostream>
using namespace std;

class MyTv {
private:
	int channel;
	bool power;
	char color[30];

public:
	MyTv() {
		channel = 0;
		power = false;
		strcpy_s(color, 30, "black");
	}

	MyTv(const char* color) {
		channel = 0;
		power = false;
		strcpy_s(this->color, 30, color);
	}

	void ShowData() {
		cout << channel << " " << power << " " << color << endl;
	}


	void powerOnOff() {
		power = !power;
	}

	void channelUp() {
		channel++;
	}

	void channelDown() {
		channel--;
	}

	void setchannel(int channel)
	{
		this->channel = channel;
	}

	void setpower(bool power)
	{
		this->power = power;
	}

	void setcolor(char* color)
	{
		strcpy_s(this->color, 30, color);
	}

	int getchaanel() {
		return channel;
	}

	bool getpower() {
		return power;
	}

	char* getcolor() {
		return color;
	}
};

//int main()
//{
//	MyTv t1;
//	t1.ShowData();
//
//	MyTv t2("red");
//	t2.ShowData();
//
//	return 0;
//}