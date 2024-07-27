#include <SFML/Graphics.hpp>
#include "FrameRate.h"

int main()
{
    //-----------------INITIALIZE----------------------
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!", sf::Style::Default, settings);
    window.setFramerateLimit(360);
    //-----------------INITIALIZE----------------------
    FrameRate frameRate;
    //-----------------INITIALIZE----------------------
    frameRate.Initialize();
    //-----------------INITIALIZE----------------------
    //-----------------LOAD----------------------
    frameRate.Load();
    //-----------------LOAD----------------------
    sf::Clock clock;
    while (window.isOpen())
    {
        sf::Time deltaTimeTimer = clock.restart();
        float deltaTime = deltaTimeTimer.asMicroseconds() / 1000.0;
        //-----------------UPDATE----------------------
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        //-----------------UPDATE----------------------
        frameRate.Update(deltaTime);
        //-----------------DRAW----------------------
        window.clear(sf::Color::Black);
        frameRate.Draw(window);
        window.display();
        //-----------------DRAW----------------------
    }

    return 0;
}