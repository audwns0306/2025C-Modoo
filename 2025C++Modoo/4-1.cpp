#include <iostream>

class Animal {
private:												// 접근 지시자
	int food;
	int weight;

public:
	void set_animal(int _food, int _weight)
	{
		food = _food;
		weight = _weight;
	}
	void increase_food(int _inc)
	{
		food += _inc;
		weight += (_inc / 3);
	}
	void view_stat()
	{
		std::cout << "이 동물의 food : " << food << std::endl;
		std::cout << "이 동물의 weight : " << weight << std::endl;
	}
};


int main()
{
	//----------------------------------------------------------------------------------------------------------------------------------------
	Animal animal;
	animal.set_animal(40, 68);
	animal.increase_food(50);

	animal.view_stat();
	//----------------------------------------------------------------------------------------------------------------------------------------

	return 0;
}

//	추상화는 불필요한 세부사항은 숨기고 인터페이스만 제공 즉 무엇을 할 것인지에 집중하고 어떻게 할것인지는 숨김
//	캡슐화는 데이터와 그 데이터를 조작하는 함수를 하나의 단위로 묶고, 외부에서 접근할 수 없게 제한하는 것
//
//	
//