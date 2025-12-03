#include "Fixed.hpp"

int main( void ) {
// Fixed a;
// Fixed const b( 10 );
// Fixed const c( 42.42f );
// Fixed const d( b );
// Fixed const e (-228);
// Fixed const f (-228.69f);
// a = Fixed( 1234.4321f );
// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "e is " << e << std::endl;
// std::cout << "f is " << f << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// std::cout << "e is " << e.toInt() << " as integer" << std::endl;
// std::cout << "f is " << f.toInt() << " as integer" << std::endl;

std::cout << "-------------------" << std::endl;
Fixed const p(Fixed(2) * Fixed(5));
std::cout << "multipling " << p << std::endl;

std::cout << "-------------------" << std::endl;
Fixed const o(Fixed(10) / Fixed(3));
std::cout << "division " << o << std::endl;

std::cout << "-------------------" << std::endl;
Fixed const m(Fixed(2) + Fixed(5));
std::cout << "sum " << m << std::endl;

std::cout << "-------------------" << std::endl;
Fixed const m1(Fixed(2) - Fixed(5));
std::cout << "substr " << m1 << std::endl;


return 0;
}
