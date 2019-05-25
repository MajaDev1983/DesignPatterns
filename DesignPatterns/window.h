#ifndef WINDOW_H
#define WINDOW_H
#include <string>
#include <iostream>

#include "SFML/Window.hpp"
#include <SFML/Graphics.hpp>


class Window
{
public:

	static Window* getInstance();
	std::string getWindowName();
	void update();

private:
	static Window* instance;

	sf::RenderWindow* renderContext;
	Window();
	~Window();
};

#endif // DEBUG