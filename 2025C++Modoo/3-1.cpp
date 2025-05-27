#include <iostream>
#include <random>

std::default_random_engine dre;
std::uniform_int_distribution<int> uid(0,100);

class Animal {

public:
	Animal() {};
	~Animal() {};

private:

	char name[30];
	int age;
	int health;
	int food;
	int clean;

public:

	void play();
	void show_stat();
};

void Animal::play(){
	
	std::cin >> name;
	age = uid(dre);
	health = uid(dre);
	food = uid(dre);
	clean = uid(dre);

	return;
}

void Animal::show_stat() {
	for (char c : name)
	{
		std::cout << c;
	}
	std::cout << ", age : " << age << ", health : " << health << ", food : " << food << ", clean : " << clean << std::endl;

	return;
}

int main()
{
	//----------------------------------------------------------------------------------------------------------------------------------------
	/*int array_size;
	std::cout << "array size : ";
	std::cin >> array_size;
	int* list = new int[array_size];
	for (int i = 0; i < array_size; ++i)
	{
		std::cin >> list[i];
	}
	for (int i = 0; i < array_size; ++i)
	{
		std::cout << list[i];
	}

	delete[] list;*/
	//----------------------------------------------------------------------------------------------------------------------------------------

	Animal* list[30];

	for (int i = 0; i < 30; ++i)
	{
		list[i] = new Animal;
		list[i]->play();
		list[i]->show_stat();
	}

	return 0;
}



// new와 delete 힙 영역 사용
// 그러나 잠깐 맛보기용일 뿐 4-1장 부터 다시 시작