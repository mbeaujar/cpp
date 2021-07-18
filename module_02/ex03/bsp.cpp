#include "Point.hpp"
#include <cmath>

float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool pointInTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
   float A = area (x1, y1, x2, y2, x3, y3);
   float A1 = area (x, y, x2, y2, x3, y3);
   float A2 = area (x1, y1, x, y, x3, y3);  
   float A3 = area (x1, y1, x2, y2, x, y);
   return (A == A1 + A2 + A3);
} 

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	return pointInTriangle(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY(), point.getX(), point.getY());
}