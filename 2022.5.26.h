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