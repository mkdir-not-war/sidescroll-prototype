#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <cassert>

#define MS_PER_UPDATE   8.0 // 125 FPS

#include "graphicsmanager.h"
#include "gamestate.h"

GameState* gs;

void temp_update()
{
    int millis = 10;

    assert(millis > MS_PER_UPDATE);
    sf::sleep(sf::milliseconds(millis));
}

void set_gamestate(GameState* newstate)
{
    GameState* old_state = gs;
    gs = newstate;
    delete old_state;
}

int main()
{
    // setup window
    sf::RenderWindow window(sf::VideoMode(800, 600), "client");
    /*
    * try to find a way to not use the singleton
    * because calling it all the time is going to be slow
    */
    GraphicsManager::getInstance();
    GraphicsManager::getInstance().setWindow(&window);
    GraphicsManager::getInstance().loadSprite("./../res/graphics/actors/player1.jpg");

    // initialize gamestate
    gs = new GS_PlayGame();

    // setup vars for game loop
    sf::Clock clock;
    double lag = 0.0;

    // game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        lag += clock.getElapsedTime().asMilliseconds();
        clock.restart();

        // process input here

        // update loop
        while (lag >= MS_PER_UPDATE) 
        {
            // update here; must not be less than MS_PER_UPDATE
            temp_update();
            lag -= MS_PER_UPDATE;
        }

        // graphics stuff here
        GraphicsManager::getInstance().draw();
    }

    return 0;
}