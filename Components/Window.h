#pragma once
#include <SFML/Graphics.hpp>

namespace Components 
{

class Window
{
public:
    Window();
    ~Window();
    void Window::run();
private:
    sf::RenderWindow renderWindow;
    sf::Event event;
    void events();
    void clear();
    void draw();
    void display();
};

} // namespace Components