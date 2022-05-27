#include <iostream>
#include <string>
#include <map>

int main()
{   
	// 연관 컨테이너
    /*
	// 노드 기반의 컨테이너 구조입니다.
	
	// int value = 10;
	// [key] [value] 
	
	// name          price
	// [sword] ----- [1000] map : 값은 중복을 허용합니다.
	// [armor] ----- [300]
	// [Gloves] ----- [1000]
	// [sword] x <- map은 key 값에 중복이 허용되지 않습니다.

	// map은 어떤 구조로 되어 있나요?
	// 레드 블랙 트리 구조로 되어 있습니다.
	// 레드 블랙 트리 : 자가 균형 이진 탐색 트리로써 삽입과 삭제가 일어나는 경우 자동으로 그 높이를 작게 유지하는 이유는 연산 과정에서 트리의 높이가 한쪽으로 치우치는 것을 방지하기 위해서 입니다.

	// 게임 내에 특정한 값을 넣기 위해서는 map 저장되어 있는 key으로 검색해주시면 됩니다.
	*/

	// map
	/*
	        // Key ---- Value
	std::map<std::string, int> data;

	                   // 아이템 이름 <-> 아이템의 가격
	data.insert(std::make_pair("sword", 200));
	data.insert(std::make_pair("armor", 500));
	data.insert(std::make_pair("shoes", 750));
    
	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << "Key : " << iter->first << std::endl;
		std::cout << "Value : " << iter->second << std::endl;
	}

	std::cout << "검색한 Key의 값 : " << data.find("shoes")->second << std::endl;
	data.erase("shoes");

	for (auto iter = data.begin(); iter != data.end(); iter++)
	{
		std::cout << "Key : " << iter->first << std::endl;
		std::cout << "Value : " << iter->second << std::endl;
	}
	*/

	// 알파벳 갯수 
	// 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램입니다.
	
	// 예제 입력 -> baekjoon
	// 
	//              a b c d e f g h i j k l m n o p q r s t u v w x y z
	// 예제 출력 -> 1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0

	std::string value;
  
	std::getline(std::cin, value);

	int result = 0;

	for (int i = 97; i <= 122; i++)
	{
		for (int j = 0; j < value.length(); j++)
		{
			if (value[j] == (char)i)
			{
				result++; 
			}
		}

		std::cout << result << std::endl;
		result = 0;
	}
	

	return 0;
}