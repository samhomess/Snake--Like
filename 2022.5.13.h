#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

// 기본 매개변수
/*
void Function(int x, int y, int z = 20)
{
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
}
*/

// main
/*
int main()
{
    // bool : 1 바이트 크기의 자료형으로 true와 false값만 저장할 수 있습니다.
    bool condition = true;

    // 변수를 저장할 때 자료형 명시적으로 입력했습니다.
    auto value = 10.636;

    // 기본 매개변수는 함수를 호출할 때 매개변수에 값이 있기 때문에 인수를 넣어주지 않아도 함수를 호출할 수 있습니다.

    // Function(x, y = 100)
    // 매개 변수 순서가 함수를 호출할 때는 왼쪽에서 부터 오른쪽으로 값이 저장됩니다.
    // 기본 매개 변수를 왼쪽부터 정의하게 되면 매개변수 어디를 저장해야되는지 모르는 상황이 발생합니다.

    // 기본 매개변수

    Function(200,360);


    // bool 변수 

    while (condition)
    {
        std::cout << value << std::endl;

        if (GetAsyncKeyState(VK_SPACE))
        {
            condition = false;
        }
    }


    // 회문 판별 

    int result = 0;

    char array[] = { "level" };

    for (int i = 0; i < (sizeof(array) - 1) / 2; i++)
    {
        if (array[i] == array[sizeof(array) - 2 - i])
        {
            result++;
        }
    }

    if (result == (sizeof(array) - 1) / 2)
    {
        std::cout << "회문입니다." << std::endl;
    }
    else
    {
        std::cout << "회문이 아닙니다." << std::endl;
    }

}
*/

