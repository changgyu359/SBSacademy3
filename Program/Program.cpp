#include <iostream>

using namespace std;

class Unit
{
private:
	static int count;
public:
	
	Unit() {
		cout << "Created Unit"<<endl;
	}
	
	~Unit() {
		count++;
		cout << "Count:"<< count << endl;
	}
};

class Card
{
private:
	char grade;
	const char* name;

public:

	Card() = default;

	Card(Card& clone) // 레퍼런스가 안들어가면 무한루프에 빠짐
	{

	}

	void initialize(char grade, const char* name)
	{
		// this : 자기 자신을 가리키는 포인터 변수.
		this->grade = grade;
		this->name = name;
	}

	

};




int Unit::count = 0;

int main()
{
#pragma region 생성자
	// 클래스의 인스턴스가 생성되는 시점에 자동으로 호출되는 특수한 멤버 함수.
	//Unit unit;

	// 생성자의 경우 객체가 생성될 때 단 한 번만 호출되며, 생성자는 반환형이
	// 존재하지 않기 때문에 생성자가 호출되기 전에는 객체에 대한 메모리가 
	// 할당되지 않음.

	// 사용법: 클래스의 이름과 똑같은 이름으로 (){}을 클래스 내부에 써주면 됨
#pragma endregion

#pragma region 소멸자
	// 객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수.

	// 소멸자는 객체가 메모리에서 해제될 때 단 한 번만 호출되며,
	// 소멸자에게는 매개 변수를 생성하여 사용할 수 없습니다.

	// 사용법: 생성자와 비슷한데, 그 앞에 ~를 붙이면 됨.

	//Unit* creature=new Unit;
	//delete creature;
	//creature = new Unit;
	//delete creature;


	// 동적할당 기억하기: 자료형* 이름= new 자료형;
	
	
#pragma endregion

#pragma region 복사 생성자
	// 같은 객체를 복사하여 생성시킬 때 호출되는 생성자.

	Card card;

	card.initialize('A', "Diamond");

	// 복사 생성자 사용법. 클래스 이름 사용이름(복사대상 이름) or 클래스이름 사용이름 =복사대상;
	Card clone(card);
#pragma endregion


	return 0;
}

