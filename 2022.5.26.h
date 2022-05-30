#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <stack>

// main
/*
int main()
{
	// 포인터 연산

	//  배열 [0] [1] [2] [3] [4]
	int array[5] = { 0,1,2,3,4 };

	//  pointer ---> [0]
	int* pointer = array;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "pointer가 가리키는 주소 : " << pointer << std::endl;
		std::cout << "array의 값 : " << *pointer << std::endl;
		pointer++;
	}


	// 반복자

	std::vector<int> data = { 0,1,2,3,4 };

	std::vector<int>::iterator pointer;

	// iterator는 vector의 시작 주소를 가리킵니다.
	pointer = data.begin();


	// iterator가 vector의 마지막 주소 + 1를 가키립니다. 
	for (pointer = data.begin(); pointer != data.end(); pointer++)
	{
		std::cout << *pointer << std::endl;
	}


	// 컨테이너 어댑터

	// queue

	std::queue<int> data;

	// 큐 컨테이너에 5개의 데이터를 저장합니다.
	//  <- [ ] [ ] [ ] [ ] [ ] <-
	// 큐 컨테이너 안에 있는 값 전체를 출력해야합니다.
	// 반복문으로 front() 출력하면서 원소를 제거하면 전체 원소를 출력시킬 수 있습니다.
	// 큐 컨테이너에 데이터가 다 없어지면 반복문을 종료합니다.

	data.push(10);
	data.push(20);
	data.push(30);
	data.push(40);
	data.push(50);

	while (data.empty() == 0)
	{
		std::cout << data.front() << std::endl;
		data.pop();
	}

	// empty : 현재 데이터가 비어있다면 1을 반환합니다.
	//         현재 데이터가 있다면 0을 반환합니다.
	//std::cout << data.empty() << std::endl;


	// stack

	std::stack<int> data;

	// ----------
	// [10] [20] [30] [40] [50]
	// ----------

	data.push(10);
	data.push(20);
	data.push(30);
	data.push(40);
	data.push(50);

	while (data.empty() == 0)
	{
		std::cout << data.top() << std::endl;
		data.pop();
	}

	// puts 함수

	puts("League");
	puts("of");
	puts("Legend");

	return 0;
}
*/

/*
#include <iostream>
#include <string>
#include <map>

int main()
{
	// 연관 컨테이너

	// 노드 기반의 컨테이너 구조입니다.

	// int value = 10;
	// [key] [value]

	// name          price
	// [sword] ----- [1000] map : 값은 중복을 허용합니다.
	// [armor] ----- [300]
	// [Gloves] ----- [1000]
	// [sword] x <- map은 key 값에 중복이 허용되지 않습니다.

	// map은 어떤 구조로 되어 있나요?
	// 레드 블랙 트리 구조로 되어 있습니다.
	// 레드 블랙 트리 : 자가 균형 이진 탐색 트리로써 삽입과 삭제가 일어나는 경우 자동으로 그 높이를 작게 유지하는 이유는 연산 과정에서 트리의 높이가 한쪽으로 치우치는 것을 방지하기 위해서 입니다.

	// 게임 내에 특정한 값을 넣기 위해서는 map 저장되어 있는 key으로 검색해주시면 됩니다.


	// map

			// Key ---- Value
	std::map<std::string, int> data;

					   // 아이템 이름 <-> 아이템의 가격
	data.insert(std::make_pair("sword", 200));
	data.insert(std::make_pair("armor", 500));
	data.insert(std::make_pair("shoes", 750));

	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << "Key : " << iter->first << std::endl;
		std::cout << "Value : " << iter->second << std::endl;
	}

	std::cout << "검색한 Key의 값 : " << data.find("shoes")->second << std::endl;
	data.erase("shoes");

	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << "Key : " << iter->first << std::endl;
		std::cout << "Value : " << iter->second << std::endl;
	}

	// 알파벳 갯수
	// 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램입니다.

	std::string value;

	std::getline(std::cin, value);

	int result = 0;

	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < value.length(); j++)
		{
			if (value[j] == (char)i)
			{
				result++;
			}
		}

		std::cout << result << std::endl;
		result = 0;
	}


	return 0;
}*/