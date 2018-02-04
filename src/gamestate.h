#ifndef GAMESTATE_H_78439257
#define GAMESTATE_H_78439257

class GameState
{
private:

	# list of gameobjects
	# list of components

	void load_GameObjects();
	void delete_GameObjects();

public:
	~GameState();

	void update();
	void draw();

protected:
	GameState(void*);

	void (*setstate)(GameState*); // function pointer to owner
};

#endif