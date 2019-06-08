#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <iostream>
#include <string>

class GameObject
{
public:
	static GameObject* create(std::string type);
	virtual void update() = 0;

	GameObject();
	~GameObject();
};

#endif
