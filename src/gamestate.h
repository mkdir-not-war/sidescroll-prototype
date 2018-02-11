#ifndef GAMESTATE_H_78439257
#define GAMESTATE_H_78439257

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "constants.hpp"
#include "gc_state.h"
#include <cassert>

enum class GS { null=0, play, mainmenu, pausemenu };

class GameState
{
public:
	GameState();
	~GameState();

	void update();
	sf::Sprite* get_spritelist(int* size);
	void handleinput();

private:
	GS currentstate;
	GS nextstate;

	// list of state components
	GC_State entities[]; // 0:camera, 1:player/inputentity, ...
	sf::Sprite spritelist[game::MAX_SPRITES]; // placeholder for sl

	void load_GameObjects(); // calls maploader if GS play
	void delete_GameObjects(); 

	sf::Vector2f getCamera_worldpos() const;

};

#endif