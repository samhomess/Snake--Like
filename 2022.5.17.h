#pragma once
#include <iostream>
#include "Book.h"

class Person
{
public:
    // 생성자
    Person()
    {
        std::cout << "Create Person" << std::endl;
    }

    // 소멸자
    ~Person()
    {
        std::cout << "Delete Person" << std::endl;
    }

    void Info()
    {
        std::cout << age << std::endl;
        std::cout << weight << std::endl;
        std::cout << name << std::endl;
    }

    int age;
    float weight;
    std::string name;

};

// main
/*
int main()
{
    // 동적 할당 배열

    int * ptr = new int[3];

    ptr[0] = 1000;
    ptr[1] = 2000;
    ptr[2] = 3000;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "ptr 변수가 가리키는 주소 : " << & ptr[i] << std::endl;
        std::cout << ptr[i] << std::endl;
    }

    // 동적 할당을 했을 때 배열 형태로 메모리를 할당하게 되면 메모리를 해제할 때 배열 형태로 해제해주어야 합니다.
    delete [] ptr;

    // 스택             힙
    // ptr ------->
    //
    // 댕글링 포인터
    // 이미 해제된 메모리를 가리키는 포인터입니다.


    // 객체 할당과 해제

    Person * man = new Person();


    man->age = 20;
    man->weight = 70.5;
    man->name = "KimGeumSoo";

    man->Info();

    delete man;


    // 참조형 변수

    int value = 10;

    int & ref = value;

    std::cout << &value << std::endl;

    ref = 300;

    std::cout << "value의 값 : " << value << std::endl;
    std::cout << "ref의 값 : " << ref << std::endl;


    return 0;
}
*/