#pragma once
#include <SFML/Graphics.hpp>

class Particle{

public:
    sf::CircleShape s;
    sf::Vector2f pos;
    sf::Vector2f vel;
    sf::Vector2f force;
    float mass;
    Particle(sf::Vector2f position, sf::Vector2f velocity, std::vector<int> color, int rad){
        pos = position;
        vel = velocity;

        s.setPosition(pos);
        s.setFillColor(sf::Color(color[0], color[1], color[2], color[3]));
        s.setRadius(rad);
        mass = rad;
    }; 
    void render(sf::RenderWindow& window){
        s.setPosition(pos);
        window.draw(s);
    };
    sf::Vector2f get_pos(){
        return pos;
    }; 
};

