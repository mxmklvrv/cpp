#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	if(N <= 0)
		throw std::invalid_argument("Horde size should be more than 0 and positive.");
	try
	{
		Zombie *horde = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			horde[i].setName(name);
			horde[i].announce();
		}
		return (horde);
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << "Memmory allocation failed" << e.what() << std::endl;
		return (nullptr);
	}
}