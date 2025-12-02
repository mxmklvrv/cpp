#include "Harl.hpp"
#include <iostream>


int main(int ac, char **av){
	if(ac != 2){
		std::cerr << "try again, but with an argument: \
DEBUG or INFO or WARNING or ERROR" << std::endl;
		return (1);
	}
	Harl harl;
	harl.complain(av[1]);
}
