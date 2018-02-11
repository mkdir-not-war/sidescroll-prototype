/*
*	This subclass is necessary because GC_State would 
* 	get bloated if it kept Sprites even for game entities
* 	that are invisible such as EffectAreas like invert gravity, etc.
*	or UI controllers. Furthermore, since it is an actor, it can 
* 	move or be idle (players + npcs + enemies).
*
*/

#ifndef GC_STATE_ACTORDRAWABLE_H_775874323456
#define GC_STATE_ACTORDRAWABLE_H_775874323456

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "gc_state.h"

enum class MOTION_STATE { idle, moving };

class GC_State_ActorDrawable : public GC_State
{
protected:
	GC_State_ActorDrawable(const std::string &, sf::Texture*);

public:
	~GC_State_ActorDrawable();

	sf::Sprite sprite;

	void setSpriteTexture(sf::Texture*);
};

#endif