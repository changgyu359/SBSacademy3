#include "stdafx.h"
#include<vector>
#include<list>

//선형 컨테이너
//std::vector
//std::list
//std::deque
//std::string

//컨테이너 어댑터
//std::queue
//std::stack
//std::priority_queue

//연관 컨테이너
//std::set
//std::map
//std::unordered_set
//std::unordered_map




int main()
{
#pragma region 선형 컨테이너
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 컨테이너.

#pragma region vector container
	
	//vector<int> vector;
	//vector.reserve(5);
	//vector.push_back(10);
	//cout << vector.capacity() << endl;
	//vector.push_back(20);
	//cout << vector.capacity() << endl;
	//vector.push_back(30);
	//cout << vector.capacity() << endl;
	//vector.push_back(40);
	//cout << vector.capacity() << endl;
	//vector.push_back(50);
	//cout << vector.capacity() << endl;
	//vector.push_back(60);
	//cout << vector.capacity() << endl;
	//vector.push_back(70);
	//cout << vector.capacity() << endl;

	//vector.pop_back();
	//for (int i = 0; i < vector.size(); i++)
	//{
	//	cout << vector[i] << " ";
	//}
	//cout <<endl<< vector.size() << endl;

	//vector.clear();
	//cout << "벡터 클리어" << endl;
	//cout << "벡터의 사이즈 값:" << vector.size() << endl;
	//cout << "벡타의 캐패시티 값:" << vector.capacity() << endl;
#pragma endregion

#pragma region list container

	list<int> list;

	list.push_back(10);
	list.push_back(20);
	
	list.push_front(10);

	list.pop_front();

	list.push_front(1);

	list.remove(20);

	for (const int list : list)
	{
	
	}

#pragma endregion


#pragma endregion

	return 0;
}

