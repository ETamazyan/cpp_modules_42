#pragma once

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const Point&	rhs);
		Point(const float x, const float y);
		~Point();
	public:
		Point&	operator=(const Point& rhs);
		float getX() const;
		float getY() const;
	private:
		const Fixed m_x;
		const Fixed m_y;
};