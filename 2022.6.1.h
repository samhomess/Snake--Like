#pragma once
#include <iostream>

class SuperPopup
{
public:
	SuperPopup()
	{
		std::cout << "Super PopUp Create" << std::endl;
	}

	virtual ~SuperPopup()
	{
		std::cout << "Super PopUp Delete" << std::endl;
	}
};
class ChildPopup : public SuperPopup
{
public:
	ChildPopup()
	{
		std::cout << "Child PopUp Create" << std::endl;
	}

	~ChildPopup()
	{
		std::cout << "Child PopUp Delete" << std::endl;
	}
};
class Speaker
{
private:
	int volume = 0;

public:
	Speaker() { }

	Speaker(int volume)
	{
		this->volume = volume;
		std::cout << this->volume << std::endl;
	}

	void Click()
	{
		std::cout << "출력" << std::endl;
	}
};
class Mouse
{
private:
	float Sensor = 0.0f;
public:
	Mouse() { }

	Mouse(float Sensor)
	{
		this->Sensor = Sensor;
		std::cout << this->Sensor << std::endl;
	}

	void Click()
	{
		std::cout << "선택" << std::endl;
	}
};
class Computer : public Mouse, public Speaker
{
public:
	Computer(float mouse, int speaker) : Mouse(mouse), Speaker(speaker)
	{

	}
};

// main
/*
int main()
{
	// 가상 소멸자

	ChildPopup * ptr = new ChildPopup;
	SuperPopup * base = ptr;

	delete base;


	// 다중 상속
	
	Computer Mac(10.5,20);

	// 클래스 두 개의 멤버가 함수의 이름이 같을 때 범위 지정 연산자를 사용해서 구분해주셔야 합니다.
	Mac.Mouse::Click();
	Mac.Speaker::Click();


	// 나머지로 떨어진 수의 갯수 구하기

	int array[10] = { 0, };
	int number = 0;
	int value;

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		std::cin >> value;
		array[i] = value % 42;
	}

	for (int i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		int count = 0;

		for (int j = i + 1; j < sizeof(array) / sizeof(int); j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}

		if (count == 0)
		{
			number++;
		}
	}

	std::cout << number << std::endl;

	return 0;
}
*/

