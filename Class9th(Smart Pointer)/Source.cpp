#include "../Program/stdafx.h"
#include "../Program/Material.h"
#include "../Program/Resource.h"
#include "../Program/Character.h"





int main()
{
#pragma region 스마트 포인터
	// 포인터를 사용하는 동시에 자동으로 메모리 관리를 해주며,
	// 경계 확인과 같은 추가 기능을 제공하는 포인터.


	/*int* ptr2 = nullptr;

	{
		int* ptr1 = new int;

		*ptr1 = 100;

		ptr2 = ptr1;
	}

	cout << *ptr2 << endl;*/ // 여기서 ptr1입력시 프로그램에서 인식을 못 함. 
	// ptr2가 넘겨 받았기 때문

#pragma endregion

#pragma region unique pointer
	// 특정한 객체를 하나의 스마트 포인터만 가리킬 수 있도록 되어 있는 포인터

	//unique_ptr<Material> pointer = make_unique<Material>();

	//// unique_ptr<Material> reference = pointer;
	//// 하나만 가리킬 수 있으므로 이대로는 진행할 수 없다.
	//// 이걸 가능하게 하려면 메모리 소유권 이전 작업을 진행해주어야 한다.
	//unique_ptr<Material> reference = move(pointer);

#pragma endregion

#pragma region shared pointer
	// 하나의 자원 객체를 여러 포인터 객체가 가리킬 수 있으며, 모든 포인터 객체가
	// 자원 객체를 필요로 하지 않을 때 자원 객체를 해제하도록 설계되어 있는 포인터.

	//shared_ptr<Resource> texture1 = make_shared<Resource>();
	//cout << "텍스쳐1의 레퍼런스 카운트:" << texture1.use_count() << endl;
	//shared_ptr<Resource> sprite1 = texture1;
	//cout << "스프라이트1의 레퍼런스 카운트:" << sprite1.use_count() << endl;

	//shared_ptr<Resource> texture2 = make_shared<Resource>();
	//shared_ptr<Resource> sprite2 = make_shared<Resource>();

	//
	//
	//cout << "텍스쳐2의 레퍼런스 카운트:" << texture2.use_count() << endl;
	//cout << "스프라이트2의 레퍼런스 카운트:" << sprite2.use_count() << endl;

	// 텍스쳐1과 스프라이트1은 같은 객체를 공유중, 카운트 2
	// 텍스쳐2와 스프라이트2는 서로 다른 객체를 가리키는 중, 각각 카운트 1

#pragma endregion

#pragma region weak pointer
	// 자원 객체를 소유하지 않기 때문에 공유 포인터로 관리되는 자원 객체를
	// 가리켜서 참조 개수에 영향을 미치지 않게 하는 포인터.
#pragma endregion

	shared_ptr<Resource> texture3 = make_shared<Resource>();
	shared_ptr<Resource> sprite3 = make_shared<Resource>();

	texture3->Share(sprite3);
	sprite3->Share(texture3);

	shared_ptr<Character> texture4 = make_shared<Character>();
	shared_ptr<Character> sprite4 = make_shared<Character>();

	texture4->Partner(sprite4);
	sprite4->Partner(texture4);

	cout << texture4.use_count() << endl;
	cout << sprite4.use_count() << endl;

	return 0;
}

