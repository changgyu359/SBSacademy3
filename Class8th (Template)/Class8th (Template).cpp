#include "../Program/stdafx.h"
#include "../Program/Language.h"
#include "../Program/Container.h"

template <typename T>
bool Same(T left, T right)
{
	return left == right;
}

template<>
bool Same(Language left, Language right)
{
	return left.Name() == right.Name();
}



int main()
{
#pragma region 템플릿
	// 데이터 형식에 의존하지 않고, 하나의 값이 여러 다른 데이터 형식을 가질 수 있는
	// 기술에 중점을 두어 재사용성을 높일 수 있는 기능.


	//cout << Same('A', 'A') << endl;
	//cout << Same(5, 10) << endl;
	//cout << Same("Head", "Head") << endl;


#pragma endregion

#pragma region 템플릿 특수화
	// 특정 자료형에 대해 다르게 처리하고 싶은 경우 특정한 자료형만 다른 형식으로
	// 동작시키는 기능


	Container<char> container(5);

	container.Push('A');
	container.Push('B');
	container.Push('C');
	container.Push('D');
	container.Push('E');

	for (int i = 0; i < container.Index(); i++)
	{
		cout << container[i] << " ";
	}

#pragma endregion

	//Language english;
	//Language korean;
	//Language japanese;

	//english.Initialize("Java");
	//korean.Initialize("Rust");
	//japanese.Initialize("Java");

	//cout<<Same(english, korean)<<endl;
	//cout << Same(english, japanese) << endl;



	return 0;
}

