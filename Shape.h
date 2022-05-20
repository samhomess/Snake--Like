#pragma once
#include <iostream>

class Shape
{
public :
	Shape(int size, std::string name) : m_size(size), m_name(name)
	{
		std::cout << m_size << std::endl;
		std::cout << m_name << std::endl;
	}

private :
	int m_size;
	std::string m_name;

};

