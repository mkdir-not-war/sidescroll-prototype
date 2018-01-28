// graphicsmanager.cpp
#include "graphicsmanager.h"
#include <cassert>

// constructor
GraphicsManager::GraphicsManager() 
{

}

void GraphicsManager::setWindow(sf::RenderWindow* w)
{
	window = w;
}

// singleton getinstance method
GraphicsManager& GraphicsManager::getInstance()
{
	static GraphicsManager instance; // auto deletes self
	return instance;
}

// main draw method
void GraphicsManager::draw()
{
	window->clear();
	window->draw(sprite);
	window->display();
}

void GraphicsManager::loadSprite(std::string filename)
{
	assert(texture.loadFromFile(filename));
	sprite.setTexture(texture);
	sprite.setScale(0.2f, 0.2f);
}