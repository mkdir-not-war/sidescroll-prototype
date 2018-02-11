// gc_state.cpp

#include "gc_state.h"

GC_State::GC_State(const std::string &e):
	entityname(e),
	worldposition(sf::Vector2f(0.0f, 0.0f))
{

}

GC_State::~GC_State()
{
	
}

GC_Graphics* GC_State::getGraphics()
{
	// call component factory with entityname
}

sf::Vector2f GC_State::get_worldpos() const
{
	return worldposition;
}