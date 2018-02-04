#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <cassert>
#include "constants.hpp"
#include "gamestate.h"
#include "graphicsmanager.h"

void temp_update()
{
    int millis = 10;

    assert(millis > game::MS_PER_UPDATE);
    sf::sleep(sf::milliseconds(millis));
}

int main()
{
    // setup window
    sf::RenderWindow window(sf::VideoMode(800, 600), "client");

    // initialize gamestate
    GameState gs(window);

    // setup vars for game loop
    sf::Clock clock;
    double lag = 0.0;
    int spritelist_size = 0;

    // game loop
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) 
            {
                window.close();
            }   
        }

        lag += clock.getElapsedTime().asMilliseconds();
        clock.restart();

        // process input here
        gs.handleinput();

        // update loop
        while (lag >= game::MS_PER_UPDATE) 
        {
            // update here; time must be greater than MS_PER_UPDATE
            gs.update();
            temp_update();
            lag -= game::MS_PER_UPDATE;
        }

        // graphics stuff here
        sf::Sprite* spritelist = gs.get_spritelist(&spritelist_size);
        GraphicsManager::draw(window, spritelist, spritelist_size);
    }

    return 0;
}