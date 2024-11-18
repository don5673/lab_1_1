#include <iostream>

#include "Point.h"
#include "Triangle.h"
#include "testingFunctions.h"

int main()
{
	std::cout.precision(3);
	Triangle triangleR;
	try
	{
		triangleR =	testingFunctions::input();
	}
	catch (const std::invalid_argument& error)
	{
		std::cerr << error.what();
		return -1;
	}
	std::cout << "perimeterR= " << triangleR.getPerimeter() << '\n';

	Triangle triangleP;
	try
	{
		triangleP = testingFunctions::input();
	}
	catch (const std::invalid_argument& error)
	{
		std::cerr << error.what();
		return -1;
	}
	std::cout << "perimeterP= " << triangleP.getPerimeter() << '\n';

	std::cout << ((triangleP.isEqual(triangleR))
		? "The triangles are equal\n"
		: "The triangles are not equal\n");

	std::cout << ((testingFunctions::isEqualSquare(triangleP, triangleR))
		? "The triangles are equal\n"
		: "The areas are not equal\n");

	int k = 0;
	std::cin >> k;
	triangleP.move(k);
	std::cout << "TriangleP moved, new vertices = ";
	testingFunctions::output(triangleP);

	return 0;
}