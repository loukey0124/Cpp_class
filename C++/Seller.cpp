#include <iostream>
using namespace std;

class Seller {
	int price;
	int numOfProduct;
	int myMoney;

public:
	Seller(int price, int num, int money) :price(price), numOfProduct(num), myMoney(money)
	{
	}

	void ShowSalesResult() const {
		cout << "��ǰ ����: " << price << endl;
		cout << "��ǰ ����: " << numOfProduct << endl;
		cout << "����" << myMoney << endl;
	}
};

//int main()
//{
//	Seller s1(1000, 10, 100);
//	s1.ShowSalesResult();
//}