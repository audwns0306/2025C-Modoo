#include <iostream>
#include "header1.h"
#include "header2.h"

using namespace header1;

int main()
{
	foo();					// header1 �� �ִ� foo() ȣ��
	bar();						

	header2::foo();			// header2 �� �ִ� foo() ȣ��
	header2::bar();			

	//[���� 1] ȭ�鿡 ��µǴ� ���� �ٲ���

	std::cout << " x " << std::endl;

	//[���� 2] �Ʒ� ������ ȭ�鿡 ��� ��µǴ°�?
	std::cout << "hi" << std::endl
		<< "my name is "
		<< "Psi" << std::endl;

	//hi
	//my name is Psi

	return 0;
}