#include "stdafx.h"
#include <unordered_set>



int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너.

	std::unordered_set<const char*> unordered_set;

	unordered_set.reserve(16);

	unordered_set.max_load_factor(2.0);
	unordered_set.insert("양손검");
	unordered_set.insert("단검");
	unordered_set.insert("둔기");
	unordered_set.insert("방패");
	unordered_set.insert("지팡이");
	unordered_set.insert("활");
	unordered_set.insert("석궁");
	unordered_set.insert("총");
	unordered_set.insert("쌍검");
	unordered_set.insert("쌍검");
	unordered_set.insert("쌍검");
	unordered_set.insert("쌍검");
	
	cout << "Load Factor:" << unordered_set.load_factor() << endl;

	// 0.5 이하(매우 낮음)
	// 0.5~1.0(고르게 분포)
	cout << "Bucket Count: "<< unordered_set.bucket_count() << endl;

#pragma endregion


	return 0;
}

