#pragma once
#include "Shape.h"

using namespace std;

class Animal
{
public:
    void Sound();
    void Sleeping();

private:
    int m_size;
    float m_weight;
    std::string m_name;
};

void Animal::Sound()
{
    std::cout << "Sound" << std::endl;
}

void Animal::Sleeping()
{
    std::cout << "Sleeping" << std::endl;
}

// 인라인 함수
/*
inline void Function(int x)
{
    std::cout << "x의 값 : " << x << std::endl;
}
*/

// main
/*
int main()
{
    // 멤버 초기화 리스트

    Shape rectangle(50,"Circle");


    // 과잉수

    int value;
    int result = 0;

    std::cin >> value;

    for (int i = 1; i < value; i++)
    {
        if (value % i == 0)
        {
            result += i;
        }
    }

    if (result > value)
    {
        std::cout << "과잉수" << std::endl;
    }
    else
    {
        std::cout << "과잉수가 아닙니다." << std::endl;
    }


    // 클래스 외부 함수

    Animal cat;
    cat.Sound();
    

    // 인라인 함수

    Function(10);
  

    // 부족수

    int value;
    int result = 0;

    cin >> value;

    for (int i = 1; i <= value; i++)
    {
        if (value % i == 0)
        {
            result += i;
        }
    }

    if (result < value * 2)
    {
        std::cout << "부족수" << std::endl;
    }
    else
    {
        std::cout << "부족수가 아닙니다." << std::endl;
    }

    return 0;
}
*/
