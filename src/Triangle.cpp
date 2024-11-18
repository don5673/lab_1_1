#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : a_(0, 0), b_(0, 0), c_(0, 0) { };
Triangle::Triangle(Point a, Point b, Point c) : a_(a), b_(b), c_(c) { };
Triangle::Triangle(const Triangle& other) : a_(other.a_), b_(other.b_), c_(other.c_) { };
Triangle::~Triangle() { };

double Triangle::getDistance(Point a, Point b) const
{
	return std::sqrt((b.getX() - a.getX()) * (b.getX() - a.getX()) + (b.getY() - a.getY()) * (b.getY() - a.getY()));
};

void Triangle::getA() const { std::cout << a_.getX() << " " << a_.getY() << " "; };
void Triangle::getB() const { std::cout << b_.getX() << " " << b_.getY() << " "; };
void Triangle::getC() const { std::cout << c_.getX() << " " << c_.getY(); };
double Triangle::getAB() const {return getDistance(a_, b_);};
double Triangle::getBC() const {return getDistance(b_, c_);};
double Triangle::getAC() const {return getDistance(a_, c_);};

void Triangle::setA(int xA, int yA) { a_.setX(xA); a_.setY(yA); };
void Triangle::setB(int xB, int yB) { b_.setX(xB); b_.setY(yB); };
void Triangle::setC(int xC, int yC) { c_.setX(xC); c_.setY(yC); };

bool Triangle::isTriangle()
{
	return getAB() + getBC() > getAC() 
		&& getAB() + getAC() > getBC() 
		&& getAC() + getBC() > getAB();
};

void Triangle::move(int k)
{
	a_.setX(a_.getX() + k);
	a_.setY(a_.getY() + k);
	
	b_.setX(b_.getX() + k);
	b_.setY(b_.getY() + k);
	
	c_.setX(c_.getX() + k);
	c_.setY(c_.getY() + k);
};

double Triangle::getPerimeter()
{
	return getAB() + getBC() + getAC();
};

bool Triangle::isEqual(Triangle& other)
{
	return this->a_.getX() == other.a_.getX() 
		&& this->a_.getY() == other.a_.getY()
		&& this->b_.getX() == other.b_.getX() 
		&& this->b_.getY() == other.b_.getY()
		&& this->c_.getX() == other.c_.getX() 
		&& this->c_.getY() == other.c_.getY();
};
