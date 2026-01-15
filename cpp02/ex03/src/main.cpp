#include "Point.hpp"

void test1(){
	std::cout << "           P(2,2)" << std::endl;
	std::cout << "           (0,8)" << std::endl;
	std::cout << "            C" << std::endl;
	std::cout << "           / \\" << std::endl;
	std::cout << "          /   \\" << std::endl;
	std::cout << "         /  P  \\" << std::endl;
	std::cout << "        /       \\" << std::endl;
	std::cout << "        A--------B" << std::endl;
	std::cout << "    (0,0)        (8,0)" << std::endl;
}
void test2(){
	std::cout << "           P(2,2)" << std::endl;
	std::cout << "           but ACB" << std::endl;
	std::cout << "           (0,8)" << std::endl;
	std::cout << "            C" << std::endl;
	std::cout << "           / \\" << std::endl;
	std::cout << "          /   \\" << std::endl;
	std::cout << "         /  P  \\" << std::endl;
	std::cout << "        /       \\" << std::endl;
	std::cout << "        A--------B" << std::endl;
	std::cout << "    (0,0)        (8,0)" << std::endl;
}
void test3(){
	std::cout << "           P(8,8)" << std::endl;
	std::cout << "           (0,8)" << std::endl;
	std::cout << "            C    P"  << std::endl;
	std::cout << "           / \\" << std::endl;
	std::cout << "          /   \\" << std::endl;
	std::cout << "         /     \\" << std::endl;
	std::cout << "        /       \\" << std::endl;
	std::cout << "        A--------B" << std::endl;
	std::cout << "    (0,0)        (8,0)" << std::endl;
}
void test4(){
	std::cout << "           P(0,0)" << std::endl;
	std::cout << "           (0,8)" << std::endl;
	std::cout << "            C" << std::endl;
	std::cout << "           / \\" << std::endl;
	std::cout << "          /   \\" << std::endl;
	std::cout << "         /     \\" << std::endl;
	std::cout << "        /       \\" << std::endl;
	std::cout << "       A(P)--------B" << std::endl;
	std::cout << "    (0,0)        (8,0)" << std::endl;
}
void test5(){
	std::cout << "           P(0,5)" << std::endl;
	std::cout << "           (0,8)" << std::endl;
	std::cout << "            C" << std::endl;
	std::cout << "           / \\" << std::endl;
	std::cout << "          /   \\" << std::endl;
	std::cout << "         /     \\" << std::endl;
	std::cout << "        /       \\" << std::endl;
	std::cout << "        A----P---B" << std::endl;
	std::cout << "    (0,0)        (8,0)" << std::endl;
}

int	main(void)
{
	Point a(0,0);
	Point b(8,0);
	Point c(0,8);

	
	std::cout <<"TEST 1: should be IN and is " << (bsp(a, b, c, Point(2, 2)) ? "INSIDE" : "OUTSIDE") << std::endl;
	test1();
	std::cout <<"TEST 2: should be IN and is " << (bsp(a, c, b, Point(2, 2)) ? "INSIDE" : "OUTSIDE") << std::endl;
	test2();
	std::cout <<"TEST 3: should be OUT and is " << (bsp(a, b, c, Point(8, 8)) ? "INSIDE" : "OUTSIDE") << std::endl;
	test3();
	std::cout <<"TEST 4: should be ON EDGE and is" << (bsp(a, b, c, Point(0,0)) ? "INSIDE" : "EDGE") << std::endl;
	test4();
	std::cout <<"TEST 5: should be ON VERTEX and is" << (bsp(a, b, c, Point(8,0)) ? "INSIDE" : "ON VERTEX") << std::endl;
	test5();

	return (0);
}
