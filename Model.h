#pragma once
#include <iostream>
#include <string>

class Model
{
public :
	Model(int size, int mesh, const char * name) 
	{
		m_size = new int(size); // 10, 100, Wizard\0
		                        // m_size -------> [] [] [] [] 4 byte (10)

		m_mesh = mesh;
		m_name = name; 

		std::cout << *m_size << std::endl;
		std::cout << m_mesh << std::endl;
		std::cout << m_name << std::endl;
	}

	Model(const Model & model)
	{                                    // 힙
		m_size = new int(*model.m_size); // [] [] [] [] 4 byte (10)
		m_mesh = model.m_mesh;
		m_name = model.m_name;
	}

	~Model()
	{
		// 동적 할당 메모리를 해제해야하는데
		delete m_size; 
		std::cout << m_name << "객체가 소멸되었습니다." << std::endl;
	}

private:
	int * m_size;
	int m_mesh;
	const char * m_name;
};

