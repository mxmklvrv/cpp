#include <iostream>

class Animal
{
public:
	Animal(){
		std::cout << " sound of an animal" << std::endl;
	}
	virtual void sound(){
		std::cout << "aaaaaaaaaaaaa" << std::endl;
	}
};

class Dog : public Animal
{
public:
	Dog(){
		std::cout << "woof woof" << std::endl;
	}
	void d(){
		std::cout << "dddddddddddd" << std::endl;
	}
		
};

class Cat : public Animal{
	public:
		Cat(){
			std::cout << "miay miay" << std::endl;
		}
		void sound() override {
			std::cout << "cccccc" << std::endl;
		}
};

int main(){
	
	Cat kit;
	// Dog pes;
	// Animal max;

	kit.sound();
	
}






