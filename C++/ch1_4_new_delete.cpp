#include<iostream>
using namespace std;

void ch1_4()
{
	char* data = (char*)malloc(sizeof(char) * 10);

	cout << "�̸��� �Է��ϼ���: ";
	cin >> data;

	cout << "�̸�: " << data << endl;

	free(data);
}

void f4_1()
{
	char* ptr = new char[10];
	cout << "���ڿ��� �Է��ϼ���: ";
	cin >> ptr;
	::cout << "�Է��� ���ڿ�: " << ptr << endl;
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
	cout << "�̸��� �Է��ϼ���: ";
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
	strcpy_s(p->name, strlen("ȫ�浿"), "ȫ�浿");
	strcpy_s(p->phone, 14, "010-9876-5432");
	p->age = 19;

	cout << "�̸�: " << p->name << " ����ó: " << p->phone << " ����: " << p->age << endl;

	delete[]p;
}