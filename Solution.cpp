#include <iostream>
#include <windows.h>
#include <conio.h>

// class는 접근 지정자를 따로 설정하지 않으면 Private으로 설정됩니다.
class Monster 
{ 
	// 공개 
public :
	int x;
	int y;
	int z;

	void Death()
	{
		HP -= 10;
		std::cout << HP << std::endl;
	}

	// 보호
protected :
	int money = 100;

	// 비공개
private :

	int HP = 100;

	void Attack()
	{
		std::cout << "Attack" << std::endl;
	}
};

class Child_Monster : public Monster
{

public:
	void Speaking()
	{
		std::cout << "Hello ~" << std::endl;
		std::cout << money << std::endl;
	}
};

// struct는 접근 지정자를 따로 설정하지 않으면 public으로 설정됩니다.
struct Object
{	
	int x = 0; // 멤버 변수
	int y = 0;
	int z = 0;

	int HP = 100;

	void Attack() // 멤버 함수
	{
		std::cout << "Attack" << std::endl;
	}

	void Health()
	{
		std::cout << "current HP : " << HP << std::endl;
	}
};


int main()
{
    Object cube;
	Monster orc;

	std::cout << cube.x << std::endl;
	std::cout << cube.y << std::endl;
	std::cout << cube.z << std::endl;

	while (1)
	{
		/*
		if (GetAsyncKeyState(VK_SPACE))
		{
			cube.HP -= 10;
			cube.Health();
			Sleep(100);
		}

		if (cube.HP <= 0)
		{
			break;
		}
		*/

		if (GetAsyncKeyState(VK_SPACE))
		{
			orc.Death();
			Sleep(100);
		}

	}

}

