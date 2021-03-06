#include "stdafx.h"
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML game", sf::Style::Close);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color(150, 50, 250));
	shape.setOutlineThickness(10.f);
	shape.setOutlineColor(sf::Color(250, 150, 100));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		shape.move(.1, .1);
		window.clear(sf::Color::White);
		window.draw(shape);
		window.display();
	}

	return 0;
}

