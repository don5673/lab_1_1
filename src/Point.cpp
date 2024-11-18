#include "Point.h"

Point::Point() : x_(0), y_(0) { };
Point::Point(int x, int y) : x_(x), y_(y) { };
Point::Point(const Point& other) : x_(other.x_), y_(other.y_) { };
Point::~Point() { };

int Point::getX() const { return x_; };
int Point::getY() const { return y_; };

void Point::setX(int x) { x_ = x; };
void Point::setY(int y) { y_ = y; };
