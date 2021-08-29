#pragma once
#include<SFML/Graphics.hpp>
#include<vector>

class Curve{
private:
public:
    sf::CircleShape sprite;
    void cubicCurve(std::vector<sf::Vector2f> points, sf::RenderWindow &window);
};