#include <iostream>

using namespace std;

namespace Colombia
{
	float area = 45789.2f;

	void size()
	{
		cout << "area:" << area << "km" << endl;
	}


}

namespace Brazil
{
	float area = 57861.5f;

	void size()
	{
		cout << "area:" << area << "km" << endl;
	}


}

using namespace Brazil;

class GameObject
{
#pragma region 접근 지정자
	// 클래스 내부에 포함되어 있는 속성에 접근 범위를 제한하는 지정자.

	// public : 클래스 내부와 자기가 상속하고 있는 클래스 그리고 클래스
	//         외부에서도 접근을 허용하는 지정자.

	// protected : 클래스 내부와 자기가 상속하고 있는 클래스까지만
	//            접근을 허용하는 지정자.

	// private : 클래스 내부까지만 접근을 허용하는 지정자.
#pragma endregion

private:
	int x = 1;
	double y = 1;
	int z = 1;
protected:
	const char* name;
public:

	void position()
	{
		cout << "x:" << x << endl;
		cout << "y:" << y << endl;
		cout << "z:" << z << endl;
	}
};

void Profile(const char* name = "James", int age = 20)
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

int main()
{
#pragma region 이름 공간
	// 속성을 구분할 수 있도록 유효 범위를 설정하는 영역.

	//size();
	//Colombia::size(); 
#pragma endregion

#pragma region 클래스
	// 사용자 정의 데이터 유형으로 속성과 함수가 포함되어 있으며,
	// 클래스를 통해 객체를 생성하여 접근하고 사용하는 집합체.


	//GameObject game;
	//game.position();

	//cout << sizeof(game) << endl;
	// 클래스의 경우 클래스 내부에 있는 변수는 클래스의 메모리 영역에
	// 포함되지만, 정적 변수와 함수의 메모리는 클래스 영역에 포함되지 않음.
#pragma endregion

#pragma region 기본 매개 변수
	// 함수의 매개 변수에 값이 전달되지 않을 때 미리 값을 설정해놓는 매개 변수

	Profile();
	Profile("John", 24);
	// 기본 매개 변수를 지정하려면 오른쪽에서 부터 값을 지정해야 함.
#pragma endregion


	return 0;
}

