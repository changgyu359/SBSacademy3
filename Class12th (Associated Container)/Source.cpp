#include "../Program/stdafx.h"
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>


struct Quest
{
	char grade;
	bool complete;
	std::string desciption;
};


int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너.

#pragma region undordered_set
	//std::unordered_set<const char*> unordered_set;

	//unordered_set.reserve(16);

	//unordered_set.max_load_factor(2.0);
	//unordered_set.insert("양손검");
	//unordered_set.insert("단검");
	//unordered_set.insert("둔기");
	//unordered_set.insert("방패");
	//unordered_set.insert("지팡이");
	//unordered_set.insert("활");
	//unordered_set.insert("석궁");
	//unordered_set.insert("총");
	//unordered_set.insert("쌍검");
	//unordered_set.insert("쌍검");
	//unordered_set.insert("쌍검");
	//unordered_set.insert("쌍검");

	//cout << "Load Factor:" << unordered_set.load_factor() << endl;

	//// 0.5 이하(매우 낮음)
	//// 0.5~1.0(고르게 분포)
	//cout << "Bucket Count: " << unordered_set.bucket_count() << endl;


	//if (unordered_set.find("석궁") != unordered_set.end())
	//{
	//	cout << "the data exists..." << endl;
	//}
	//else
	//{
	//	cout << "the data does not exists..." << endl;
	//}

	//unordered_set.erase("총");

	//for (const char* element : unordered_set)
	//{
	//	cout << element << endl;
	//}
#pragma endregion

#pragma region unordered_map

	//unordered_map<std::string,int> inventory;

	//inventory["체력포션"] = 5;
	//inventory["마나포션"]=3;
	//inventory["엘릭서"]=1;
	//inventory["파워업"]=1;
	//inventory["부활초"]=2;

	//string input;

	//std::cin >> input;

	//if (inventory[input] > 0 && inventory.find(input) != inventory.end())
	//{
	//	inventory[input]--;

	//	cout << input << "use" << endl;

	//	if (inventory[input] <= 0)
	//	{
	//		inventory.erase(input);

	//		cout << input << "all items acquired." << endl;
	//	}
	//}
	//else
	//	{
	//		cout << "doesn't exist." << endl;
	//	}
	//

	//for (const auto& element : inventory)
	//{
	//	cout << "name:" << element.first << "quantity:" << element.second << endl;
	//}
#pragma endregion

#pragma region set

	//std::set<const char*>set;

	//set.insert("리그 오브 레전드");
	//set.insert("메이플스토리");
	//set.insert("서든어택");
	//set.insert("오버워치");
	//set.insert("포켓몬스터");
	//set.insert("슈퍼마리오");
	//set.insert("식물vs좀비");
	//set.insert("팰월드");

	//for (const auto & a : set)
	//{
	//	cout << "Name:" << a << endl;
	//}

	//cout << "set empty:" << set.empty() << endl;

	//cout << "set size : " << set.size() << endl;
	//cout << "set max size : " << set.max_size() << endl;

#pragma endregion

#pragma region map
	//std::map<std::string, Quest> map;

	//map.insert({ "모험의 시작",{'E',false,"다음 목적지로 이동하세요."} });
	//map.insert({ "첫번째 사냥",{'D',false,"슬라임을 한 마리 잡으세요."} });
	//map.insert({ "아플때는 약이 최고",{'E',false,"소비템에서 물약을 사용하세요."} });
	//map.insert({ "합법적인 벌목",{'C',false,"스텀프를 5마리 잡으세요"} });

	//map["모험의 시작"].complete = true;

	//for (const auto& a : map)
	//{
	//	cout << "퀘스트 제목:" << a.first << endl;
	//	cout << "등급:" << a.second.grade << endl;
	//	cout << "클리어:" << a.second.complete << endl;
	//	cout <<	"내용:" << a.second.desciption<<endl<<endl;
	//}

#pragma endregion


#pragma endregion


	return 0;
}

