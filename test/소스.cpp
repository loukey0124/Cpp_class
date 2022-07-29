#include <iostream>
using namespace std;

int copynum(char* str1, const char* str2) {
	int count = 0;
	while (*str2 != '\0') {
		if (*str2 >= '0' && *str2 <= '9') {
			*str1 = *str2;
			count++;
			str1++;
		}
		str2++;
	}
	*str1 = '\0';
	return count;
}

int main()
{
	char arr[30];
	copynum(arr, "adfh356sd5!");

	cout << arr << endl;
	return 0;
}