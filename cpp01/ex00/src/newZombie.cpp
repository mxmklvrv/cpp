#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	try{
		Zombie *freshZombie = new Zombie(name);
		return (freshZombie);
	}
	catch(const std::bad_alloc& e){
		std::cerr << "Memmory allocation failed"<< e.what() << std::endl;
		return (nullptr);
	}
}