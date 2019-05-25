#include <iostream>
#include "window.h"

//https://www.sfml-dev.org/tutorials/2.5/start-vc.php --> ako nekaj zasteka, pomoc
//https://sourcemaking.com/design_patterns

int main()
{
	//std::cout << window::getInstance()->getWindowName() << std::endl;
	Window::getInstance()->update();
	return 0;
}