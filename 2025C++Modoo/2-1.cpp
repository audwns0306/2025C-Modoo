#include <iostream>


int main()
{
	int a = 3;
	int& another_a = a;									//������(reference)

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
	
	return 0;
}

//	���۷����� �����Ϳ� ���������� �߿��� �������� �ִ�.
// 
//	1. ���۷����� �ݵ�� ó���� ������ ������ �� ������ �����ؾ� �Ѵ�.
//	ex) int* p; (O) ����
//		int& r; (X) �Ұ���
//
//	2. ���۷����� �� �� ������ �Ǹ� ����� �ٸ� ���� ������ �� �� ����.
//	ex) int a = 10;
//		int& another_a = a;
//
//		int b = 3;
//		another_a = b;	-> �� ������ �ᱹ b�� ���� a�� �����ϴ� �Ͱ� ����.
//	
//	3. ���۷����� �޸� �� �������� ���� ���� �ִ�.
//	ex)	int a = 10;
//		int& another_a = a; -> another_a�� �޸� �� ���� X
//
//
//