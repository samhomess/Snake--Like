#pragma once
#include <iostream>
#include <set>
#include <string>

void Function(int x)
{
	std::cout << x << std::endl;
}

void Function(int x, int y)
{
	std::cout << x << "," << y << std::endl;
}

void Function(char x)
{
	std::cout << x << std::endl;
}

// 반환형으로 함수의 오버로딩을 구현할 수 없습니다.
/*
int Function(double x)
{
	return x;
}
*/

class Phone
{
public:
	Phone()
	{
		std::cout << "따르릉~" << std::endl;
	}

	Phone(int x, int y)
	{
		call = x;
		size = y;

		std::cout << call << std::endl;
		std::cout << size << std::endl;
	}

private:
	int call;
	int size;
};

// main
/*
int main()
{
	// set

	// std::map -> key와 value
	// key을 활용해서 데이터를 확인합니다.

	// set -> key
	// key값이 중복이 허용되지 않습니다.
	// insert 원소가 자동으로 정렬됩니다.


	std::set<int> data;
	std::set<int>::iterator iter;

	data.insert(10);
	data.insert(80);
	data.insert(35);
	data.insert(40);
	data.insert(50);

	for (iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << *iter << std::endl;

	}

	// [10] [35] [40] [50] [80]

	iter = data.find(77);

	if (iter != data.end())
	{
		std::cout << "데이터가 존재합니다." << std::endl;
	}
	else
	{
		std::cout << "데이터가 없습니다." << std::endl;
	}

	// 함수의 오버로딩

	   다른 매개변수들을 가진 같은 이름의 함수를 여러 개 정의할 수 있습니다.

	   Function('G');
	   Function(10, 20);

	   Phone iPhone(10,20);

	// O X 퀴즈
	// "OOXXOXXOOO와 같은 OX퀴즈의 결과가 있습니다."
	// O는 문제를 맞춘 것이고, X는 틀린 것입니다.
	// 문제를 맞은 경우는 그 문제의 점수는 그 문제까지 연속된 O의 개수가 됩니다.
	// "OOXXOXXOOO" = 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10

	// 입력받을 문자배열을 선언하고

	int result = 0;
	std::string input;
	int count = 1;

	std::getline(std::cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'O')
		{
			result += count;
			count++;
		}

		if (input[i] == 'X')
		{
			count = 1;
		}
	}

	std::cout << result << std::endl;
	
	return 0;
}
*/