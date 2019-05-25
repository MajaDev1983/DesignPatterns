#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"



Shape * Shape::createShape(std::string type)
{
	if (type == "Triangle")
	{
		return new Triangle();
	}
	else if (type == "Rectangle")
	{
		return new Rectangle();
	}
}

Shape::Shape()
{
}


Shape::~Shape()
{
}
