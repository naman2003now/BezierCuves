#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800, 800), "BezierCurves");
    sf::Event event;

    while(window.isOpen()){
        while(window.pollEvent(event)){
            if(event.type == sf::Event::Closed) window.close();
        }
        window.clear();
        window.display();

    }
    return 0;
}