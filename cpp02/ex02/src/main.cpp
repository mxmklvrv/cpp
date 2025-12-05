#include "Fixed.hpp"

int	main(void)
{
	std::cout << std::string(20, '+') << std::endl;
	std::cout << "        +-*/     " << std::endl;
	std::cout << std::string(20, '+') << std::endl;
	Fixed a(322);
	Fixed b(1.5f);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;

	std::cout << std::string(20, '+') << std::endl;
	std::cout << "  == != >= <= < >" << std::endl;
	std::cout << std::string(20, '+') << std::endl;

	Fixed c(42.42f);
	Fixed d(42.42f);
	Fixed e(123);

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << c << " == " << d << " is " << (c == d) << std::endl;
	std::cout << e << " != " << c << " is " << (e != c) << std::endl;
	std::cout << d << " < " << e << " is " << (d < e) << std::endl;
	std::cout << c << " <= " << d << " is " << (c <= d) << std::endl;
	std::cout << d << " > " << e << " is " << (d > e) << std::endl;
	std::cout << c << " >= " << e << " is " << (c >= e) << std::endl;
	
	return (0);
}
