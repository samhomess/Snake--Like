#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

// is a 관계
class Person
{
    // final이란?
    // 더 이상 클래스나 가상함수 상속받지 않고 재정의할 수 없도록
    // 설정하는 키워드입니다.

    virtual void Think()
    {
        cout << "Idea" << endl;
    }

    virtual void Speaking () final
    {
        cout << "Speak" << endl;
    }
};

class Student final : public Person
{
    void Think()
    {
        cout << "Student Idea" << endl;
    }

    // Speaking() 함수는 Person 클래스에서 final로 선언되었기 때문에
    // 더 이상 사용할 수 없습니다.
    // void Speaking() { }
};

// Student 클래스는 final로 선언되었기 때문에 더 이상 상속받을 수 없습니다.
//class ScholarShipStudent : public Student
//{
//
//};

// has a 관계
class Gun
{
private :
    int bullet;
public :
    Gun(int m_bullet) : bullet(m_bullet) {}

    void Shot()
    {
        cout << "Launch" << endl;
        bullet--;
    }
};

class Police : public Gun
{
private :
    int handcuff;
public:
    Police(int m_bullet, int m_handcuff) : Gun(m_bullet), handcuff(m_handcuff) {}

    void Handcuffed()
    {
        cout << "Snap" << endl;
        handcuff--;
    }
};


int main()
{
    Police police(10, 3);

    police.Shot();
    police.Handcuffed();


    sf::RenderWindow window(sf::VideoMode(200, 200), "Game SFML");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
