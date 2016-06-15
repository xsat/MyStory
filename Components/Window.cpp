#include "Window.h"

Window::Window() 
: renderWindow(sf::VideoMode(200, 200), "3")
{
}

Window::~Window()
{
}

void Window::run()
{
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (renderWindow.isOpen())
    {
        sf::Event event;
        while (renderWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                renderWindow.close();
        }

        renderWindow.clear();
        renderWindow.draw(shape);
        renderWindow.display();
    }

}