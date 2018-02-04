// gamestate.cpp

#include "gamestate.h"

GameState::GameState()
{
	loadGameObjects();
}

GameState::~GameState()
{
	deleteGameObjects();
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
void GameState::loadGameObjects(GS currstate)
{
	// load up gameobject and component lists
	switch(currstate) {
		case play:
			break;
		default:
			break;
	}
}

void GameState::deleteGameObjects()
{
	// empty gameobject and component lists
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
	sf::Sprite spritelist[game::MAX_SPRITES];
	int listsize = 0;

	// for each graphics component
	// extract the sprite into the list
	// increment the size

	// test code ////////////////////////////////////////////////////
	listsize = 1;
	sf::Sprite sprite;
	sf::Texture texture;
	assert(texture.loadFromFile("./../res/graphics/actors/player1.jpg"));
	sprite.setTexture(texture);
	sprite.setScale(0.2f, 0.2f);
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