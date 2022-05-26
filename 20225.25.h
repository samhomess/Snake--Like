#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <list>
#include <vector>
#include <time.h>

int value = 5;

using namespace std;


// main
/*
int main()
{
	// list 
	// 노드 기반으로 연결된 메모리 공간입니다.
	// 런타임에 컨테이너의 크기를 가변적으로 변경이 가능해요.

	std::list<int> value;

	value.push_back(878);
	value.push_back(44);
	value.push_back(1);
	value.push_front(5);

	srand(time(NULL));
	int variable = 0;

	for (auto& Element : value)
	{
		std::cout << Element << "  ";
	}

	while (1)
	{
		int key = _getch();

		switch (key)
		{
			case 32 :
				variable = rand() % 100;
				value.push_back(variable);
				break;
		}

		system("cls");

		value.sort();

		for (auto& Element : value)
		{
			std::cout << Element << "  ";
		}
	}

	// 반복자
	// 데이터 컨테이너의 요소를 가리키는 포인터입니다.

	int array[5] = { 0,1,2,3,4 };

	std::cout << &array[0] << std::endl;
	std::cout << array[0] << std::endl;
	std::cout << &array[0]+1 << std::endl;
	std::cout << array[0]+1 << std::endl;

	vector<int> Score;

	Score.push_back(5);
	Score.push_back(10);
	Score.push_back(15);
	Score.push_back(20);

	// 반복자가 현재 가리키는 iter는 Score.begin(vector의 시작주소를 가리킵니다.)
	//
	// begin                             end
	//  0       1        2        3       4
	// [5]     [10]     [15]     [20]   [  ]
	// iter = 0 -> 1 ->

	for (vector<int>::iterator iter = Score.begin(); iter != Score.end(); iter++)
	{
		std::cout << &iter << std::endl;
		std::cout << *iter << std::endl;
	}

	int value = 100;

	// 전역 변수와 지역 변수의 이름이 같을 때 변수를 출력하게 되면 지역 변수가 우선순위를 가지므로 지역 변수만 출력됩니다.
	// 하지만, :: 범위 지정 연산자를 사용하여 전역 변수를 명시적으로 설정할 수 있습니다.

	std::cout << "value의 값 : " << value << std::endl;
	std::cout << "value의 값 : " << ::value << std::endl;

	return 0;
}
*/