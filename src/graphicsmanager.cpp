// graphicsmanager.cpp

#include "graphicsmanager.h"

static void GraphicsManager::draw(
	sf::RenderWindow* window, 
	sf::Sprite* spritelist,
	int spritelist_size)
{
	window->clear();
	
	for (int i=0; i<spritelist_size; i++)
	{
		sf::Sprite sprite = spritelist[i];
		window->draw(sprite);
	}
	
	window->display();
}