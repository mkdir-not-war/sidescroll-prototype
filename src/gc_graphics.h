#ifndef GC_GRAPHICS_H_37285982
#define GC_GRAPHICS_H_37285982

#include <SFML/Graphics.hpp>
#include <cassert>

class GC_Graphics
{
public:
	~GC_Graphics();

protected:
	// protected so no one can ever make a gc_graphics,
	// only a child of it
	GC_Graphics();

	void loadtex(sf::Texture, const std::string &);
};

#endif