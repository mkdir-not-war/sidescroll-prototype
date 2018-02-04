#ifndef GC_GRAPHICS_REDSQUAURE_H_8903325768
#define GC_GRAPHICS_REDSQUAURE_H_8903325768

#include "gc_graphics.h"

class GC_Graphics_RedSquare : public GC_Graphics
{
public:
	sf::Texture tex_idle;
	sf::Texture tex_moving;

	GC_Graphics_RedSquare();
	~GC_Graphics_RedSquare();
};

#endif