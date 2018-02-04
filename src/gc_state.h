#ifndef GC_STATE_H_77587439506
#define GC_STATE_H_77587439506

#include "gc_graphics.h"
//#include "gc_physics.h"
//#include "gc_input.h"
//#include "gc_ai.h"

class GC_State
{
private:
	const std::string &entityname; // **see devlog //////////////////////////

	const GC_Graphics* graphics_;
	//const GC_Physics* physics_;
	//const GC_Input* input_;
	//const GC_AI* ai_;

protected:
	GC_State(const std::string &);

	/*
	*	Calls factory to find graphics component flyweight 
	* 	given entityname. 
	*/
	GC_Graphics* getGraphics(const std::string &);
public:
	~GC_State();
};

#endif