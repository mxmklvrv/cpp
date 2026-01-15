#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed abp = Point::area(a, b, point);
	Fixed bcp = Point::area(b, c, point);
	Fixed cap = Point::area(c, a, point);
	//std::cout << abp << bcp << cap << std::endl;

	if((abp > 0 && bcp > 0 && cap > 0) || (abp < 0 && bcp < 0 && cap < 0))
		return true;
	return false;
}
