#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;

	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}

// std::cout << std::string(20, '+') << std::endl;
// std::cout << "        +-*/     " << std::endl;
// std::cout << std::string(20, '+') << std::endl;
// Fixed a(322);
// Fixed b(1.5f);
// std::cout << "a = " << a << std::endl;
// std::cout << "b = " << b << std::endl;
// std::cout << "a + b = " << (a + b) << std::endl;
// std::cout << "a - b = " << (a - b) << std::endl;
// std::cout << "a * b = " << (a * b) << std::endl;
// std::cout << "a / b = " << (a / b) << std::endl;
// std::cout << std::string(25, '+') << std::endl;
// std::cout << "  == != >= <= < >" << std::endl;
// std::cout << std::string(25, '+') << std::endl;
// Fixed c(42.42f);
// Fixed d(42.42f);
// Fixed e(123);
// std::cout << "c = " << c << std::endl;
// std::cout << "d = " << d << std::endl;
// std::cout << "e = " << e << std::endl;
// std::cout << c << " == " << d << " is " << (c == d) << std::endl;
// std::cout << e << " != " << c << " is " << (e != c) << std::endl;
// std::cout << d << " < " << e << " is " << (d < e) << std::endl;
// std::cout << c << " <= " << d << " is " << (c <= d) << std::endl;
// std::cout << d << " > " << e << " is " << (d > e) << std::endl;
// std::cout << c << " >= " << e << " is " << (c >= e) << std::endl;
// std::cout << std::string(34, '+') << std::endl;
// std::cout << "            pre/post ++ -- " << std::endl;
// std::cout << std::string(34, '+') << std::endl;
// Fixed f;
// std::cout << "f = " << f << std::endl;
// std::cout << "pre-increment = "<< ++f << std::endl;
// std::cout << "f after pre-increment = " << f << std::endl;
// std::cout << "post-increment = "<< f++ << std::endl;
// std::cout << "f after post-increment = "<< f << std::endl;
// std::cout << "f = " << f << std::endl;
// std::cout << "pre-decrement = "<< --f << std::endl;
// std::cout << "f after pre-decrement = " << f << std::endl;
// std::cout << "post-decrement = "<< f-- << std::endl;
// std::cout << "f after post-decrement = " << f << std::endl;
// std::cout << std::string(20, '+') << std::endl;
// std::cout << "        min max     " << std::endl;
// std::cout << std::string(20, '+') << std::endl;
// Fixed const g(55);
// Fixed const h(56.5f);
// std::cout << "a = " << a << std::endl;
// std::cout << "e = " << e << std::endl;
// std::cout << "Fixed::min(a, e) " << Fixed::min( a, e) << std::endl;
// std::cout << "Fixed::max(a, e) " << Fixed::max( a, e) << std::endl;
// std::cout << "const" << std::endl;
// std::cout << "g = " << g << std::endl;
// std::cout << "h = " << h << std::endl;
// std::cout << "Fixed::min(g, h) " << Fixed::min(g, h) << std::endl;
// std::cout << "Fixed::max(g, h) " << Fixed::max(g, h) << std::endl;
// std::cout << "mixed" << std::endl;
// std::cout << "Fixed::min(a, h) " << Fixed::min(a, h) << std::endl;
// return (0);
// }
