#include "Point.hpp"

static float calculate_triangle_region(const Point &a, const Point &b, const Point &c)
{
	float region_value = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2;

	return region_value < 0 ? -region_value : region_value;
}
bool bsp(const Point a, const Point b, const Point c, const Point point)
{
	float main_area = calculate_triangle_region(a, b, c);
	float area1 = calculate_triangle_region(point, a, b);
	float area2 = calculate_triangle_region(point, b, c);
	float area3 = calculate_triangle_region(point, a, c);

	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	return (area1 + area2 + area3) == main_area;
}
