// gc_graphics.cpp

#include "gc_graphics.h"

GC_Graphics::GC_Graphics()
{
	
}

GC_Graphics::~GC_Graphics()
{
	
}

void GC_Graphics::loadtex(sf::Texture tex, const std::string &filename)
{
	assert(tex.loadFromFile(filename));
}