#include <SFML/Graphics.hpp>
#include <iostream>
#include "BezierCurve.h"

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 800), "BezierCurves");
    sf::Event event;
    Curve curve;
    sf::CircleShape point;

    std::vector<sf::Vector2f> points = {
        sf::Vector2f(420, 250),
        sf::Vector2f(300, 500),
        sf::Vector2f(600, 110),
        sf::Vector2f(320, 230),
    };

    while(window.isOpen()){
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed) window.close();
        }
        window.clear(sf::Color(50, 50, 50));
        curve.cubicCurve(points, window);
        for(int i = 0; i < 4; i++){
            point.setPosition(points[i] - sf::Vector2f(10, 10));
            point.setRadius(10);
            point.setFillColor(sf::Color(50, 250, 150));
            window.draw(point);
        }
        window.display();

    }
    return 0;
}