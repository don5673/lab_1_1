#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point();
	Point (int x, int y);
	Point (const Point& other);
	~Point();

	int getX() const;
	int getY() const;

	void setX(int x);
	void setY(int y);

private:
	int x_{ 0 };
	int y_{ 0 };
};

#endif 
