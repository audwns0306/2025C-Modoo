#include <iostream>


int main()
{
	int a = 3;
	int& another_a = a;									//참조자(reference)

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
	
	return 0;
}

//	레퍼런스는 포인터와 유사하지만 중요한 차이점이 있다.
// 
//	1. 레퍼런스는 반드시 처음에 누구의 별명이 될 것인지 지정해야 한다.
//	ex) int* p; (O) 가능
//		int& r; (X) 불가능
//
//	2. 레퍼런스가 한 번 별명이 되면 절대로 다른 이의 별명이 될 수 없다.
//	ex) int a = 10;
//		int& another_a = a;
//
//		int b = 3;
//		another_a = b;	-> 이 문장은 결국 b의 값을 a에 대입하는 것과 같다.
//	
//	3. 레퍼런스는 메모리 상에 존재하지 않을 수도 있다.
//	ex)	int a = 10;
//		int& another_a = a; -> another_a는 메모리 상에 존재 X
//
//
//