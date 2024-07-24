#include <SFML/Graphics.hpp>

int main()
{
    //-----------------INITIALIZE----------------------
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!", sf::Style::Default, settings);
    window.setFramerateLimit(360);
    //-----------------INITIALIZE----------------------

    //-----------------INITIALIZE----------------------
    //-----------------INITIALIZE----------------------

    //-----------------LOAD----------------------
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

        //-----------------DRAW----------------------
        window.clear(sf::Color::Black);
        window.display();
        //-----------------DRAW----------------------
    }

    return 0;
}