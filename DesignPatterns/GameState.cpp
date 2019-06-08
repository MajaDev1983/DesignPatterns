#include "GameState.h"


GameState::GameState()
{
}


GameState::~GameState()
{
}

void GameState::update()
{
	for (auto object : GameState::gameObjects)
	{
		object->update();
	}
}

GameObject* GameState::instantiateObject(std::string objectType)
{
	GameObject* object = GameObject::create(objectType);
	this->registerObject(object);
	return object;
}

void GameState::registerObject(GameObject* object)
{
	GameState::gameObjects.push_back(object);
}
