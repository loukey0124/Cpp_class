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
	std::cout << "첫 번째 숫자 입력:";
	std::cin >> val1;

	int val2;
	std::cout << "두 번째 숫자 입력:";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 출력" << result << std::endl;
	std::cout << "덧셈 결과 출력" << val1 + val2 << std::endl;
}

void ch1_2_3()
{
	int val1, val2;
	int result = 0;

	std::cout << "두개의 숫자 입력";
	std::cin >> val1 >> val2;
	
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "두 수 사이의 정수 합:" << result << std::endl;
}

void ch1_2_4()
{
	char name[100];
	char phone[100];

	std::cout << "이름입력: ";
	std::cin >> name;

	std::cout << "전화번호 입력: ";
	std::cin >> phone;

	std::cout << "\n정보 출력\n" << std::endl;
	std::cout << "이름:" << name << "\n전화번호:" << phone << std::endl;
}

void ch1_quiz1()
{
	int val1, val2;
	int result = 0;

	std::cout << "첫 번째 숫자 입력";
	std::cin >> val1;
	std::cout << "두 번째 숫자 입력";
	std::cin >> val2;
	result = val1 + val2;
	
	std::cout << "연산결과\n";
	std::cout << val1 << '+' << val2 << '=' << result << std::endl;
}

void ch1_quiz2()
{
	int num;

	std::cout << "2~9사이의 값을 입력하세요:";
	std::cin >> num;

	std::cout << "구구단 " << num << "단" << std::endl;
	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}