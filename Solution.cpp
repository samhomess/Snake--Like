#include <iostream>
#include <string>

// 가상 함수
class Animal 
{
public:
	int x = 100;

	// 가상 함수
	virtual void Sound()
	{
		std::cout << "울음소리~" << std::endl;
	}
	
private:
	int mouth;
	int eye;
	int leg;
};
class Dog : public Animal
{
public :
	void Sound()
	{
		std::cout << "멍멍~" << std::endl;
	}
};
class Cat : public Animal
{
public :
	void Sound()
	{
		std::cout << "냐옹~" << std::endl;
	}
};
class Duck : public Animal
{
public :
	void Sound()
	{
		std::cout << "꽥꽥~" << std::endl;
	}
};

// 순수 가상 함수
class Pen
{
   // 순수 가상 함수
   virtual void Drawing() = 0;
};
class Circle : public Pen
{
public :
	void Drawing()
	{
		std::cout << "동그라미" << std::endl;
	} 
};
class Rectangle : public Pen
{
public :
	void Drawing()
	{
		std::cout << "네모" << std::endl;
	}
};
class Star : public Pen
{
public :
	void Drawing()
	{
		std::cout << "별" << std::endl;
	}
};

int main()
{
	// 가상 함수
	/*
	Animal * animal = new Dog;
	Cat * cat = new Cat;
	Duck* duck = new Duck;

	animal->Sound();
	animal->Sound();

	animal = cat;
	animal->Sound();

	animal = duck;
	animal->Sound();
	*/

	// 순수 가상 함수
	/*
	// 순수 가상 함수는 자신의 객체만 가리킬 수 있습니다.
	// 하위 클래스 반드시 재정의되어야 하는 멤버 함수
	Star * star = new Star;
	star->Drawing();

	Rectangle * rectangle = new Rectangle;
	rectangle->Drawing();
	*/
	
	// 프로그래머스 1 단계
    // 완벽한 문자열 판별하기
	/*
	int count = 0;

	std::string input;
	std::getline(std::cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 48; j <= 57; j++)
		{
			if (input[i] == (char)j)
			{
				count++;
			}
		}
	}

	if (count > 0)
	{
		std::cout << "완벽한 문자열이 아닙니다." << std::endl;
	}
	else
	{
		std::cout << "완벽한 문자열" << std::endl;
	}
	*/

	return 0;
}

