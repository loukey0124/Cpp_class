#include <iostream>
using namespace std;

void ch1_2()
{
	int num = 20;
	std::cout << "Hello world" << std::endl;
	std::cout << "Hello" << "world" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
}

void ch1_2_2()
{
	int val1;
	std::cout << "ù ��° ���� �Է�:";
	std::cin >> val1;

	int val2;
	std::cout << "�� ��° ���� �Է�:";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���� ��� ���" << result << std::endl;
	std::cout << "���� ��� ���" << val1 + val2 << std::endl;
}

void ch1_2_3()
{
	int val1, val2;
	int result = 0;

	std::cout << "�ΰ��� ���� �Է�";
	std::cin >> val1 >> val2;
	
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "�� �� ������ ���� ��:" << result << std::endl;
}

void ch1_2_4()
{
	char name[100];
	char phone[100];

	std::cout << "�̸��Է�: ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ �Է�: ";
	std::cin >> phone;

	std::cout << "\n���� ���\n" << std::endl;
	std::cout << "�̸�:" << name << "\n��ȭ��ȣ:" << phone << std::endl;
}

void ch1_quiz1()
{
	int val1, val2;
	int result = 0;

	std::cout << "ù ��° ���� �Է�";
	std::cin >> val1;
	std::cout << "�� ��° ���� �Է�";
	std::cin >> val2;
	result = val1 + val2;
	
	std::cout << "������\n";
	std::cout << val1 << '+' << val2 << '=' << result << std::endl;
}

void ch1_quiz2()
{
	int num;

	std::cout << "2~9������ ���� �Է��ϼ���:";
	std::cin >> num;

	std::cout << "������ " << num << "��" << std::endl;
	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}