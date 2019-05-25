#include "window.h"
Window* Window::instance = 0;

Window* Window::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Window();
		return instance;
	}
	else
	{
		return instance;
	}
}

std::string Window::getWindowName()
{
	return "My singleton window";
}

void Window::update()
{
	while (this->renderContext->isOpen())
	{
		sf::Event event;
		while (this->renderContext->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				this->renderContext->close();
		}

		this->renderContext->clear();
		this->renderContext->display();
	}
}

Window::Window()
{
	this->renderContext = new sf::RenderWindow(sf::VideoMode(800, 600), this->getWindowName());
}


Window::~Window()
{
}
