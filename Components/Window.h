#pragma once
#include <SFML/Graphics.hpp>

class Window
{
private:
    sf::RenderWindow renderWindow;
public:
    Window();
    ~Window();
    void Window::run();
};

