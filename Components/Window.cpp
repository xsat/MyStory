#include "Window.h"

namespace components
{

Window::Window()
    : renderWindow(sf::VideoMode(200, 200), "4")
    , event()
    , modes()
{
}

Window::~Window()
{
}

void Window::run()
{
    for (; renderWindow.isOpen(); ) {
        for (; renderWindow.pollEvent(event); ) {
            events();
        }

        clear();
        draw();
        display();
    }
}

void Window::events()
{
    if (event.type == sf::Event::Closed)
        renderWindow.close();
}

void Window::clear()
{
    renderWindow.clear();
}

void Window::draw()
{
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    renderWindow.draw(shape);
}

void Window::display()
{
    renderWindow.display();
}

} // namespace components