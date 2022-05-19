#include <iostream>

using namespace std;

namespace A_SPACE
{
    int value = 100;

    void Function()
    {
        std::cout << "A Space" << std::endl;
    }
}

namespace B_SPACE
{
    int value = 200;

    void Function()
    {
        cout << "B Space" << endl;    
    }

    namespace B_COPY_SPACE
    {
        int value = 800;
    }
}

using namespace A_SPACE;

int main()
{
    // 범위 기반 반복문
    /*
    // 시작점과 끝점을 알려주지 않아도 처음부터 끝까지 순회를 해주는 반복문입니다.

    int array[5] = { 13,66,100,72,5 };
    double data[5] = { 10.6, 8.75, 6.33, 1.23, 4.41 };

    // 범위 기반 반복문은 배열에 있는 요소에 접근할 수 없다.
    // 데이터 리스트(array, data)요소를 Element 변수에 복사를 하기 때문에 요소에 접근할 수 없다.
    // 복사를 했으므로 복사 비용이 발생합니다.

    // const를 사용하게 되면 Element의 값을 변경할 수 없다.
    for (auto & Element : array)
    { 
        Element = 0;
        std::cout << Element << std::endl;
    }
    */

    // 범위 지정 연산자
    /*
    // 이름 공간에서 식별자를 지정해주는 연산자입니다.
    cout << value << endl;
    cout << value << endl;
    A_SPACE::Function();
    Function();

    cout << B_SPACE::B_COPY_SPACE::value << std::endl;
    */

    return 0;
}

