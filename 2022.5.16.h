#pragma once
#include <iostream>
#include <conio.h>
#include <windows.h>

class TV
{
public:
    void RemoteControl_UP()
    {
        channel++;

        if (channel > 10)
        {
            channel = 0;
        }

        std::cout << "channel : " << channel << " 번 " << std::endl;
    }

private:
    int channel = 0;
    int volume = 0;
};

class Transportation
{
protected:
    std::string name;

    float speed = 0.0;
    int wheel = 0;
    int handle = 0;
};

class car : public Transportation
{
public:

    void info()
    {
        speed = 100;
        wheel = 4;
        handle = 1;
        name = "Sonata";

        std::cout << "Name : " << name << std::endl;
        std::cout << "Speed : " << speed << std::endl;
        std::cout << "Wheel : " << wheel << std::endl;
        std::cout << "handle : " << handle << std::endl;
    }
};

class airplane : public Transportation
{
public:
    void info()
    {
        speed = 400;
        wheel = 3;
        handle = 2;
        name = "KF15";

        std::cout << "Name : " << name << std::endl;
        std::cout << "Speed : " << speed << std::endl;
        std::cout << "Wheel : " << wheel << std::endl;
        std::cout << "handle : " << handle << std::endl;
    }
};

// main
/*
int main()
{
    // 추상화

    TV LG_TV;

    airplane A10;
    car B10;

    while (1)
    {
        if (GetAsyncKeyState(VK_RETURN))
        {
            A10.info();

            std::cout << std::endl;

            B10.info();

            std::cout << std::endl;

            Sleep(100);
        }

        if (GetAsyncKeyState(VK_SPACE))
        {
            LG_TV.RemoteControl_UP();
            Sleep(100);
        }
    }
   

    // 스택
    //   4 byte
    // [ [ ptr ]        ]     
    // 힙  |
    // [  [200][500][][][][][] ]

    {
        // new는 메모리를 동적으로 할당하는 연산자입니다.
        // 힙 영역에 메모리가 4byte가 할당되고 10이라는 값을 저장합니다.
        int* ptr = new int(10);
        //   힙
        //  4byte  
        // [    ] 
        //   0        

        // 4 byte
        *ptr = 100;

        std::cout << "ptr이 가리키는 값 :" << *ptr << std::endl;

        int value = 100;
    } // <- value [100] 해제 ptr도 해제가 되었습니다.  


    return 0;
}
*/