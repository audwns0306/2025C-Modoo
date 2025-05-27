#include <iostream>

class Animal {
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
	Animal animal;
	animal.set_animal(40, 68);
	animal.increase_food(50);

	animal.view_stat();

	return 0;
}