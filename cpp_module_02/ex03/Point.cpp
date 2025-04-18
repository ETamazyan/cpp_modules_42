#include "Point.hpp"

Point::Point() : m_x(0), m_y(0)
{
}

Point::Point(const float val_x, const float val_y) : m_x(val_x), m_y(val_y)
{
}

Point::Point(const Point &other) : m_x(other.getX()), m_y(other.getY())
{
}

float Point::getX(void) const
{
	return (this->m_x.toFloat());
}

float Point::getY(void) const
{
	return (this->m_y.toFloat());
}

Point &Point::operator=(const Point &other)
{
	if (this == &other)
		return (*this);
	(Fixed) this->m_x = other.getX();
	(Fixed) this->m_y = other.getY();
	return (*this);
}

Point::~Point()
{
}