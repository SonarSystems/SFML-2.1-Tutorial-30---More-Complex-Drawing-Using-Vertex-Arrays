#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::VertexArray lines(sf::LinesStrip, 3);

	lines[0].position = sf::Vector2f(50, 40);
	lines[0].color = sf::Color::Red;

	lines[1].position = sf::Vector2f(300, 50);
	lines[1].color = sf::Color::Magenta;

	lines[2].position = sf::Vector2f(200, 200);
	lines[2].color = sf::Color::Green;

	sf::VertexArray trianglesStrip(sf::TrianglesStrip, 4);

	trianglesStrip[0].position = sf::Vector2f(30, 50);
	trianglesStrip[0].color = sf::Color::Red;

	trianglesStrip[1].position = sf::Vector2f(200, 75);
	trianglesStrip[1].color = sf::Color::Yellow;

	trianglesStrip[2].position = sf::Vector2f(10, 200);
	trianglesStrip[2].color = sf::Color::Magenta;

	trianglesStrip[3].position = sf::Vector2f(500, 500);
	trianglesStrip[3].color = sf::Color::Cyan;

	sf::VertexArray trianglesFan(sf::TrianglesFan, 4);

	trianglesFan[0].position = sf::Vector2f(300, 300);
	trianglesFan[0].color = sf::Color::Red;

	trianglesFan[1].position = sf::Vector2f(300, 50);
	trianglesFan[1].color = sf::Color::Yellow;

	trianglesFan[2].position = sf::Vector2f(450, 250);
	trianglesFan[2].color = sf::Color::Blue;

	trianglesFan[3].position = sf::Vector2f(350, 400);
	trianglesFan[3].color = sf::Color::Cyan;

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.draw(trianglesFan);

		window.display();
	}
}