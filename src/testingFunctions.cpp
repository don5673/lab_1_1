#include "testingFunctions.h"

#include <iostream>

bool testingFunctions::isEqualSquare(Triangle& t1, Triangle& t2)
{
	double t1Perimeter = (t1.getPerimeter() / 2);
	double t1Square = std::sqrt(t1Perimeter * (t1Perimeter - t1.getAB())
			* (t1Perimeter - t1.getBC()) * (t1Perimeter - t1.getAC()));

	double t2Perimeter = (t2.getPerimeter() / 2);
	double t2Square = std::sqrt(t2Perimeter * (t2Perimeter - t2.getAB())
		* (t2Perimeter - t2.getBC()) * (t2Perimeter - t2.getAC()));

	return t1Square == t2Square;
}

Triangle testingFunctions::input()
{
	Triangle triangle;
	int aX = 0;
	int aY = 0;
	int bX = 0;
	int bY = 0;
	int cX = 0;
	int cY = 0;

	std::cin >> aX >> aY >> bX >> bY >> cX >> cY;
	triangle.setA(aX, aY);
	triangle.setB(bX, bY);
	triangle.setC(cX, cY);

	if (!(triangle.isTriangle()))
	{
		throw std::invalid_argument("ERROR: it is impossible to construct a triangle from given points)\n");
	}

	return triangle;
}

void testingFunctions::output(Triangle& t)
{
	t.getA();
	t.getB();
	t.getC();
	std::cout << '\n';
}
