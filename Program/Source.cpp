#include "stdafx.h"





int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며,
	// 경계 확인과 같은 추가 기능을 제공하는 포인터.

	
	int* ptr2 = nullptr;

	{
		int* ptr1 = new int;

		*ptr1 = 100;

		ptr2 = ptr1;
	}

	cout << *ptr2 << endl; // 여기서 ptr1입력시 프로그램에서 인식을 못 함. 
	// ptr2가 넘겨 받았기 때문

#pragma endregion


	return 0;
}

