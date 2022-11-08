#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

// is a ����
class Person
{
    // final�̶�?
    // �� �̻� Ŭ������ �����Լ� ��ӹ��� �ʰ� �������� �� ������
    // �����ϴ� Ű�����Դϴ�.

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

    // Speaking() �Լ��� Person Ŭ�������� final�� ����Ǿ��� ������
    // �� �̻� ����� �� �����ϴ�.
    // void Speaking() { }
};

// Student Ŭ������ final�� ����Ǿ��� ������ �� �̻� ��ӹ��� �� �����ϴ�.
//class ScholarShipStudent : public Student
//{
//
//};

// has a ����
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
