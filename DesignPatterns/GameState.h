#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <iostream>
#include <vector>
#include "GameObject.h"

class GameState
{
public:
	std::vector<GameObject*> gameObjects;


	GameState();
	~GameState();

	void update();
	GameObject* instantiateObject(std::string objectType);
	void registerObject(GameObject* object);

};

#endif 