#include <iostream>
#include "header1.h"
#include "header2.h"

using namespace header1;

int main()
{
	foo();					// header1 에 있는 foo() 호출
	bar();						

	header2::foo();			// header2 에 있는 foo() 호출
	header2::bar();			

	//[문제 1] 화면에 출력되는 것을 바꾸자

	std::cout << " x " << std::endl;

	//[문제 2] 아래 문장은 화면에 어떻게 출력되는가?
	std::cout << "hi" << std::endl
		<< "my name is "
		<< "Psi" << std::endl;

	//hi
	//my name is Psi

	return 0;
}