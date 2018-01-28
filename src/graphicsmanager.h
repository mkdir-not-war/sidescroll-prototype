#include <SFML/Graphics.hpp>

#ifndef MYGRAPHICS_H_317890327
#define MYGRAPHICS_H_317890327

class GraphicsManager
{

private:
	GraphicsManager();
	sf::RenderWindow* window;

	sf::Texture texture;
	sf::Sprite sprite;

public:
	// idk what the ampersand does
	static GraphicsManager& getInstance(); 

	// In C++11 apparently these delete the 
	// copy constructor and assignment operator
	// so they can never be made.
	GraphicsManager(GraphicsManager const&) = delete;
	void operator=(GraphicsManager const&) = delete;

	// sets window pointer, called in getInstance
	void setWindow(sf::RenderWindow*);

	// main draw method
	void draw();

	// load sprite(s)/textures using filename
	void loadSprite(std::string);

};

#endif