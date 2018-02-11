// gamestate.cpp

#include "gamestate.h"

GameState::GameState() :
	currentstate(GS::play)
{
	load_GameObjects();
}

GameState::~GameState()
{
	delete_GameObjects();
}

/*
*	It's totally ok to use switch-case statement
* 	in load (here) and delete because they will
* 	called so seldom. Almost never, relative to
*	how often the game updates its internal state.
*	Unless the player manages to press the pause 
*	button at ~60 Hz.
*
*/
void GameState::load_GameObjects()
{
	// load up gameobject and component lists
	switch(currentstate) {
		case GS::play:
			break;
		default:
			break;
	}
}

void GameState::delete_GameObjects()
{
	// empty gameobject and component lists
}

sf::Vector2f GameState::getCamera_worldpos() const
{
	return entities[0].get_worldpos();
}

void GameState::update()
{
	// for each collision component
	// update

	// for each physical component
	// update
}

sf::Sprite* GameState::get_spritelist(int* size)
{
	int listsize = 0;

	// for each entity (after camera=0)

	// ask the graphics component to get the sprite

	// set sprite position relative to camera position
	//sf::Vector2f camerapos = getCamera_worldpos();

	// put sprite into spritelist

	// increment the size

	// test code ////////////////////////////////////////////////////
	listsize = 1;
	sf::Sprite sprite;
	sf::Texture texture;
	assert(texture.loadFromFile("./../res/graphics/actors/player1.jpg"));
	sprite.setTexture(texture);
	sprite.setScale(0.5f, 0.5f);
	//sprite.setPosition(sf::Vector2f(0.0f, 0.0f));
	spritelist[0] = sprite;
	//////////////////////////////////////////////////////////////////


	*size = listsize;
	return spritelist;
}

void GameState::handleinput()
{
	// for each input component
	// handle
}