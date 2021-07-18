#include "Point.hpp"

// Coplien Form

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(Point const &copy) : _x(Fixed(copy.getX())), _y(Fixed(copy.getY())) {} 

Point::~Point() {}

Point& Point::operator=(Point const &copy) {
	(void)copy;
	return *this;
}


// Getters

int Point::getX() const {
	return this->_x.toFloat();
}

int Point::getY() const {
	return this->_y.toFloat();
}