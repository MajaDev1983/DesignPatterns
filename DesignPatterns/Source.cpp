#include <iostream>
#include "window.h"
#include "Shape.h"

//https://www.sfml-dev.org/tutorials/2.5/start-vc.php --> ako nekaj zasteka, pomoc
//https://sourcemaking.com/design_patterns
//https://sourcemaking.com/design_patterns/factory_method

int main()
{
	//std::cout << window::getInstance()->getWindowName() << std::endl;
	Shape* basicShape = Shape::createShape("Triangle");
	basicShape->update();
	Shape* anotherShape = Shape::createShape("Rectangle");
	anotherShape->update();
	Window::getInstance()->update();
	return 0;
}