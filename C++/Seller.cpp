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
		cout << "상품 가격: " << price << endl;
		cout << "상품 개수: " << numOfProduct << endl;
		cout << "현금" << myMoney << endl;
	}
};

//int main()
//{
//	Seller s1(1000, 10, 100);
//	s1.ShowSalesResult();
//}