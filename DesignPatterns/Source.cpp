#include <iostream>
#include "window.h"
#include "GameObject.h"
#include "Rectangle.h"

//https://www.sfml-dev.org/tutorials/2.5/start-vc.php --> ako nekaj zasteka, pomoc
//https://sourcemaking.com/design_patterns
//https://sourcemaking.com/design_patterns/factory_method

int main()
{
	Window::getInstance()->update();
	return 0;
}