#pragma once
#include <SFML/Graphics.hpp>
#include "Modes.h"

namespace components 
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
    Modes modes;
    void events();
    void clear();
    void draw();
    void display();
};

} // namespace components