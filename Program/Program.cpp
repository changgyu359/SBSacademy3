#include <iostream>
#include "Monster.h"

using namespace std;



int main()
{
#pragma region 다형성
	// 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른 방법으로 처리할 수 있는 기능

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는 정적 바인딩을 하지 않고,
	// 실행 시간에 함수와 속성이 결정될 수 있는 동적 바인딩을 가능하게 함.


#pragma endregion

	Monster Slime;

	Monster Skeleton;

	Monster Golem;

	Slime.stat(50, 1, 1);

	Skeleton.stat(100, 5, 1);

	Golem.stat(250, 10, 5);

	

	return 0;
}

