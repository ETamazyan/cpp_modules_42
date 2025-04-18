#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp(const Point a, const Point b, const Point c, const Point point);

void test_point(const Point &a, const Point &b, const Point &c, const Point &p, bool expected)
{
	bool result = bsp(a, b, c, p);
	std::cout << "Point (" << p.getX() << ", " << p.getY() << ") - ";
	std::cout << (result == expected ? "PASS" : "FAIL") << " - ";
	std::cout << "Expected: " << (expected ? "INSIDE" : "OUTSIDE") << ", ";
	std::cout << "Got: " << (result ? "INSIDE" : "OUTSIDE") << std::endl;
}

int main()
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);

	// Test cases
	test_point(a, b, c, Point(1, 1), true);	   // Inside
	test_point(a, b, c, Point(5, 5), true);	   // Inside
	test_point(a, b, c, Point(0, 0), false);   // Vertex
	test_point(a, b, c, Point(5, 0), false);   // On edge
	test_point(a, b, c, Point(11, 0), false);  // Outside
	test_point(a, b, c, Point(0, 11), false);  // Outside
	test_point(a, b, c, Point(-1, -1), false); // Outside

	// Edge cases
	test_point(a, b, c, Point(0.01f, 0.01f), true);
	test_point(a, b, c, Point(9.99f, 0.01f), true);
	test_point(a, b, c, Point(0.01f, 9.99f), true);

	return 0;
}