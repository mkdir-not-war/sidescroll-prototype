#ifndef GC_STATE_H_77587439506
#define GC_STATE_H_77587439506

#include "gc_graphics.h"
//#include "gc_physics.h"
//#include "gc_input.h"
//#include "gc_ai.h"

#include <SFML/System.hpp>

class GC_State
{
private:
	const std::string &entityname; // **see devlog //////////////////////////

	const GC_Graphics* graphics_;
	//const GC_Physics* physics_;
	//const GC_Input* input_;
	//const GC_AI* ai_;

	sf::Vector2f worldposition;

protected:
	GC_State(const std::string &);

	/*
	*	Calls factory to find graphics component flyweight 
	* 	given entityname. 
	*/
	GC_Graphics* getGraphics();
public:
	~GC_State();

	sf::Vector2f get_worldpos() const;
};

#endif