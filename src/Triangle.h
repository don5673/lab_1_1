#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle
{
public:
	Triangle();
	Triangle(Point a, Point b, Point c);
	Triangle(const Triangle& other);
	~Triangle();

	double getDistance(Point a, Point b) const;

	void getA() const;
	void getB() const;
	void getC() const;
	double getAB() const;
	double getBC() const;
	double getAC() const;

	void setA(int xA, int yA);
	void setB(int xB, int yB);
	void setC(int xC, int yC);

	bool isTriangle();
	void move(int k);
	double getPerimeter();
	bool isEqual(Triangle& other);

private:
	Point a_{0, 0};
	Point b_{0, 0};
	Point c_{0, 0};
};

#endif 
