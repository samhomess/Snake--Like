#pragma once
#include <iostream>

class Book
{
private:
	int page = 100;
	int price = 10000;
	std::string name = "윤성우의 열혈 C++ 프로그래밍";

public :
	void Read();
	void Write();
};

