#pragma once
#include <iostream>

// ���� ���
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

// ���ø� 
/*
// �Լ��� Ŭ������ ���������� �ٽ� �ۼ����� �ʾƵ�, ���� �ڷ������� ����� �� �ֵ��� ����� �� ����Դϴ�.
// �Լ��� ����� ��Ȯ������, �ڷ����� ��ȣ�ϰ� �����ϴ� ���Դϴ�.
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
	// ���̾Ƹ�� ���	
	D D_object;
	D_object.A_value = 20;
	

	// ���� ���	
	// B�� C�� ���� ������� �ٲ��ָ� �� ���������� ����� ������� �� �ֵ��� ������ �� �ֽ��ϴ�.
	D D_object;
	D_object.A_value = 1000;

	std::cout << D_object.A_value << std::endl;
	

	// ���ø�
	std::cout << Add<int>(5, 5) << std::endl;
	std::cout << Add<float>(34.58, 51.36) << std::endl;
	
	return 0;
}
*/