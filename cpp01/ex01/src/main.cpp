#include "Zombie.hpp"


// probably test for mem aloc fail

void test(){
	std::cout << std::string(55, '-') << std::endl;
	std::cout << "Test 1, all valid" << std::endl;
	int	qty = 5;
	std::string zombieName = "Maxim";
	Zombie *orda;

	try
	{
		orda = zombieHorde(qty, zombieName);
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memmory allocation failed "<< e.what() << std::endl;
		return ;
	}
	delete[] orda;
}

void test1(){
	std::cout << std::string(55, '-') << std::endl;
	std::cout << "Test 2, qty is 0" << std::endl << std::endl;
	int	qty = 0;
	std::string zombieName = "Maxim";
	Zombie *orda;

	try
	{
		orda = zombieHorde(qty, zombieName);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
		return ;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memmory allocation failed "<< e.what() << std::endl << std::endl;
		return ;
	}
	delete[] orda;

}

void test2(){
	std::cout << std::string(55, '-') << std::endl;
	std::cout << "Test 3, qty is -6" << std::endl << std::endl;
	int	qty = -6;
	std::string zombieName = "Maxim";
	Zombie *orda;

	try
	{
		orda = zombieHorde(qty, zombieName);
	}
	catch(const std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
		return ;
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memmory allocation failed "<< e.what() << std::endl;
		return ;
	}
	delete[] orda;
}


int main(void){

	test();
	test1();
	test2();
}