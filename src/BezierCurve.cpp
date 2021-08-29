#include "BezierCurve.h"
#include <iostream>
#include <math.h>

sf::Vector2f parametricPoint(std::vector<sf::Vector2f> P, float t){
    return (float)std::pow(1 - t, 3)*P[0] + 3*(float)std::pow(1 - t, 2)*t*P[1] + 3*(1 - t)*t*t*P[2] + t*t*t*P[3];
}

void Curve::cubicCurve(std::vector<sf::Vector2f> points, sf::RenderWindow &window){
    this->sprite.setFillColor(sf::Color(250, 50, 50));
    for(float i = 0; i < 1000;i++){
        this->sprite.setRadius(2);
        this->sprite.setPosition(parametricPoint(points, i/1000.0f));
        window.draw(this->sprite);
    }
}