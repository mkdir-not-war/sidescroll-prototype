#include <SFML/Graphics.hpp>

#ifndef MYGRAPHICS_H_317890327
#define MYGRAPHICS_H_317890327

static class GraphicsManager
{
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