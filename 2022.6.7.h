#pragma once
#include <iostream>

// 가상 상속
/*
class A
{
public :
	int A_value = 10;
};

class B : virtual public A
{
public :
	int B_value = 20;
};

class C : virtual public A
{
public :
	int C_value = 30;

};

class D : public B, public C
{
public :
	int D_value = 50;
};
*/

// 템플릿 
/*
// 함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러 자료형으로 사용할 수 있도록 만들어 진 기능입니다.
// 함수의 기능은 명확하지만, 자료형을 모호하게 설정하는 것입니다.
template<typename T>
T Add(T x, T y)
{
	return x + y;
}
*/

// main
/*
int main()
{
	// 다이아몬드 상속	
	D D_object;
	D_object.A_value = 20;
	

	// 가상 상속	
	// B와 C를 가상 상속으로 바꿔주면 한 군데에서만 상속을 보장받을 수 있도록 설정할 수 있습니다.
	D D_object;
	D_object.A_value = 1000;

	std::cout << D_object.A_value << std::endl;
	

	// 템플릿
	std::cout << Add<int>(5, 5) << std::endl;
	std::cout << Add<float>(34.58, 51.36) << std::endl;
	
	return 0;
}
*/