plans:

Each component -- graphics, physics, etc -- will only have static information, not stateful data that is different for every instance of an entity using that component. However, that non-stateful info, for example textures in a graphics component, will need to be instatiated and setup in some cases, so the class itself is not static.

Thus, the flyweight pattern. GameState will hold an array of GC_State, which are essentially the instances of the entities in the game. It will also hold an array for each type of component, but assuming at least two entities in the world share a component, these arrays of components will be smaller than the array of entities. 

Each GC_State will need at most a pointer to each of its components; at least an index to the spot in the array in GameState to each of its components. Not sure yet which option is optimal.

Rather than passing in each of the component pointers to each instance of a GC_State, just pass in an entityname and use that to query a ComponentFactory, which uses the entityname as a key to find the appropriate components from ./data/components.xml and load them into the GC_State and the arrays in GameState (no order necessary).
	|
	|
	v
Alternatively, allow GC_State to accept pointers in the constructor and use the entityname query to the ComponentFactory inside GameState. This would have the benefit of being more easy to create arrays of the Components inside GameState.

** but how are we going to eventually interface the ComponentFactory with MapReader and Writer?