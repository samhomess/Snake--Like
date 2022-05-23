#include "Object.h"
#include <vector>
#include <windows.h>
#include <conio.h>

int main()
{
    // this 포인터
    /*
    Object Computer(10, 20, 30); 
    Object Phone(5, 10, 15);

    Computer.Address();
    Phone.Address();
    */
    

    std::vector<std::string> arrow = {"←", "→", "↑", "↑", "↓" };

    //  vector     stack --------> heap 
    //  0   1   2   3   4
    // [1] [2] [7] [3] [5]

    // 배열의 장점
    //              
    //  0   2   3   4   접근 : O(1)
    // [1] [3] [4] [5]  삽입과 삭제 : O(n)


    while (1)
    {
        // [] [] [] [] []

        for (auto Element : arrow)
        {
            std::cout << Element << "  ";
        }

        if (arrow.size() == 0)
        {
            break;
        }

        int key = _getch();

        system("cls");

        switch (key)
        {
           case 32 :
               arrow.pop_back();
              break;
           case 77:
               arrow.push_back("→");
              break;
        }

    }
     
    return 0;
}

