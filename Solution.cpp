#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <time.h>

static int stage = 5;
int value = 0;

std::vector<std::string> arrow;

void Initialize()
{
    srand(time(NULL));

    for (int i = 0; i < stage; i++)
    {
        value = rand() % 4;

        switch (value)
        {
        case 0: arrow.push_back("↑");
            break;
        case 1: arrow.push_back("←");
            break;
        case 2: arrow.push_back("→");
            break;
        case 3: arrow.push_back("↓");
            break;
        }
    }
}

int main()
{
    // 화살표를 잘못 입력했을 때 게임이 종료되도록 설정합니다.
    // 그리고 스테이지 별로 설정합니다.
    // 스테이지는 난이도에 따라 5, 6 ,7 ,8, 9
    // 스테이지를 다 클리어하면 "게임을 완벽하게 수행하였습니다."

    int Health = 10;

    Initialize();

    while (1)
    {
        if (Health == 0)
        {
            system("cls");
            std::cout << "게임을 완료하지 못하고 종료하였습니다." << std::endl;
        }

        if (stage == 10)
        {
            system("cls");
            std::cout << "게임을 정상적으로 완료하였습니다." << std::endl;
        }

        if (arrow.size() == 0)
        {
            stage++;
            Initialize();
        }

        for (auto Element : arrow)
        {
            std::cout << Element << "  ";
        }

        std::cout << "Health : " << Health << std::endl;

        int key = _getch();

        system("cls");
    
        switch (key)
        {
           case 72 : 
               if (arrow.back() == "↑") arrow.pop_back();
               else Health--;
               break;
           case 75 : 
               if (arrow.back() == "←") arrow.pop_back();
               else Health--;
               break;
           case 77 : 
               if (arrow.back() == "→") arrow.pop_back(); 
               else Health--;
               break;
           case 80 :
               if (arrow.back() == "↓") arrow.pop_back();
               else Health--;
               break;
        }
    }
     
    return 0;
}

