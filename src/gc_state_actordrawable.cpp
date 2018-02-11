// gc_state_actordrawable.cpp

#include "gc_state_actordrawable.h"

GC_State_ActorDrawable::GC_State_ActorDrawable(
	const std::string &entityname, sf::Texture* tex) :
	GC_State(entityname)
{
	sprite.setTexture(*tex);
}

void GC_State_ActorDrawable::setSpriteTexture(sf::Texture* tex)
{
	sprite.setTexture(*tex);
}