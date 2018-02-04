#ifndef GAMESTATE_H_78439257
#define GAMESTATE_H_78439257

#include <SFML/Graphics.hpp>
#include "constants.hpp"
#include "gc_state.h"
#include <cassert>

enum class GS { null=0, play, mainmenu, pausemenu };

class GameState
{
public:
	~GameState();

	void update();
	sf::Sprite* get_spritelist(int* size);
	void handleinput();

protected:
	GameState();

private:
	GS currentstate;
	GS nextstate;

	// list of state components
	GC_State entities[];

	void load_GameObjects(GS); // calls maploader if GS play
	void delete_GameObjects(GS); // not sure this even needs a parameter

};

#endif