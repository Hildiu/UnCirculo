#include <iostream>
#include <thread>
#include <chrono> //-- para controlar el retardo
#include "CCirculo.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
    srand(time(nullptr));
    CCirculo   circulo1(&window,50.f,70.f,75.f,3.f,3.f,sf::Color::Cyan);
    CCirculo   circulo2(&window,25.f, 550.f,200.f,3.f,3.f,sf::Color::Red);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        circulo1.Muestrate();
        circulo2.Muestrate();
        window.display();
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        circulo1.Muevete();
        circulo2.Muevete();
    }

    return 0;
}