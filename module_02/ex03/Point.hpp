#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point;

class Point {
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		// Coplien Form
		Point();
		Point(const float, const float);
		Point(Point const &);
		virtual ~Point();
		Point& operator=(Point const &);

		// Getters
		int getX() const;
		int getY() const;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif