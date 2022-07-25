#include<iostream>
using namespace std;

void ch1_4()
{
	char* data = (char*)malloc(sizeof(char) * 10);

	cout << "이름을 입력하세요: ";
	cin >> data;

	cout << "이름: " << data << endl;

	free(data);
}

void f4_1()
{
	char* ptr = new char[10];
	cout << "문자열을 입력하세요: ";
	cin >> ptr;
	::cout << "입력한 문자열: " << ptr << endl;
	delete[] ptr;
}

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

void MakeStrAdr_main()
{
	char* str = MakeStrAdr(20);
	strcpy_s(str, 11, "Hello CPP~");
	cout << str << endl;

	free(str);
}

char* MakeStrNew(int len)
{
	char* str = new char[len];
	return str;
}

void MakeStrNew_main()
{
	char* str = MakeStrNew(20);
	strcpy_s(str, 11, "Hello CPP~");
	cout << str << endl;
	delete[] str;
}

void quiz4_1()
{
	int* data = new int[10];

	for (int i = 0; i < 10; i++) {
		*(data + i) = i;
		cout << *(data + i) << " ";
	}

	delete[] data;
}

void quiz4_2()
{
	char* name = new char[32];
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << name << endl;

	delete[] name;
}

void quiz4_3()
{
	typedef struct person {
		char name[7];
		char phone[14];
		int age;
	}Person;

	Person* p = new Person[1];
	strcpy_s(p->name, strlen("홍길동"), "홍길동");
	strcpy_s(p->phone, 14, "010-9876-5432");
	p->age = 19;

	cout << "이름: " << p->name << " 연락처: " << p->phone << " 나이: " << p->age << endl;

	delete[]p;
}