#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#ifndef MYGRAPHICS_H_317890327
#define MYGRAPHICS_H_317890327

class GraphicsManager
{
private:
	GraphicsManager() {}

public:
	/*
	*	input:
	*		1. the window to draw to
	*		2. the list of sprites to draw
	*		3. the number of sprites in the list
	*/
	static void draw(sf::RenderWindow*, sf::Sprite*, int);
};

#endif