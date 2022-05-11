#include <iostream>

int main()
{
	int value = 100;
	char character = 'A';

	char cptr[10];

	// 문자열 입력 함수
	gets_s(cptr, sizeof(cptr));

	// float 변수는 소수점 6 자릿까지 정확도를 표시합니다.
	float variable = 6.375;

	// double 변수는 소수점 15 자릿까지 정확도를 표시합니다.
	double x = 1.11111111111111;
 
	std::cin >> value;

	std::cout << value << std::endl;
	std::cout << variable << std::endl;
	std::cout << x << std::endl;

	std::cout << character;
}

