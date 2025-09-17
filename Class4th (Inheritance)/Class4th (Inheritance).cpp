#include <iostream>
// 사용자 정의 헤더는 쌍따옴표로 가져옴
#include "../Program/Potion.h"

using namespace std;


int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록 설정해주는 기능.



	//Consumable consumable; // 이거 사용하려면 헤더 파일 가져와야함->#include필요

	//Potion potion;

	//cout << "Consumable의 size:" << sizeof(consumable) << endl;
	//cout << "Potion의 size:" << sizeof(Potion) << endl;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 수 없으며, 
	// 하위 클래스는 상위 클래스의 메모리가 포함된 상태로 메모리의 크기가 결정됨.
#pragma endregion


	return 0;
}

