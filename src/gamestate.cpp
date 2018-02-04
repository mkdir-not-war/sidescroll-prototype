// gamestate.cpp
#include "gamestate.h"
#include <cassert>

GameState::GameState(void* setstate_ptr): 
	nextstate(NULL), 
	setstate(setstate_ptr)
{
	loadGameObjects();
}

GameState::~GameState()
{
	deleteGameObjects();
}

void GameState::load_GameObjects()
{

}

void GameState::delete_GameObjects()
{

}

void GameState::update()
{
	// for each physical component
	// update
}