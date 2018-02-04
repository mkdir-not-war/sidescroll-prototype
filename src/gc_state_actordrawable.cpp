// gc_state_actordrawable.cpp

#include "gc_state_actordrawable.h"

GC_State_ActorDrawable::GC_State_ActorDrawable(sf::Texture* tex):
	next_texture(NULL)
{
	sprite.setTexture(*tex);
}

GC_State_ActorDrawable::setSpriteTexture(sf::Texture* tex)
{
	sprite.setTexture(*tex);
}