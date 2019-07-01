#include <SFML/Graphics.hpp>
#include<iostream>

using namespace std;

sf::Vertex lines[] =
{
	sf::Vertex(sf::Vector2f(0, 100), sf::Color::Cyan, sf::Vector2f(0, 0)),
	sf::Vertex(sf::Vector2f(32, 234), sf::Color::Yellow, sf::Vector2f(0,0)),
	sf::Vertex(sf::Vector2f(134, 64), sf::Color::Red, sf::Vector2f(0,0)),
	sf::Vertex(sf::Vector2f(423, 121), sf::Color::White, sf::Vector2f(0,0))
};

sf::Vertex line[] =
{
	sf::Vertex(sf::Vector2f(255, 100), sf::Color::Red, sf::Vector2f(0,0)),
	sf::Vertex(sf::Vector2f(0, 255), sf::Color::Green, sf::Vector2f(0,0)),
	sf::Vertex(sf::Vector2f(255, 100), sf::Color::Yellow, sf::Vector2f(0,0))
	};

sf::Vertex line1[] =
{
	sf::Vertex(sf::Vector2f(255, 100), sf::Color::Red, sf::Vector2f(0,0)),
	sf::Vertex(sf::Vector2f(300, 255), sf::Color::Cyan, sf::Vector2f(100,0))
};

sf::Vertex lineas[] =
{
	sf::Vertex(sf::Vector2f(500, 100), sf::Color::Red, sf::Vector2f(0,0)),
	sf::Vertex(sf::Vector2f(500, 255), sf::Color::Yellow, sf::Vector2f(100,0)),
	sf::Vertex(sf::Vector2f(800, 255), sf::Color::Blue, sf::Vector2f(100,0))
};


void printarray(int arg[], int length) {
	for (int n = 0; n < length; ++n)
		cout << arg[n] << ' ';
	cout << '\n';
}

int main()
{
	int firstarray[] = { 5, 10, 15 };
	int secondarray[] = { 2, 4, 6, 8, 10 };
	printarray(firstarray, 3);
	printarray(secondarray, 5);

	sf::RenderWindow window(sf::VideoMode(800, 600), "juego");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.display();
		window.draw(line, 3, sf::Lines);
		window.draw(line1, 2, sf::Lines);
		window.draw(lineas, 3, sf::Lines);
		window.draw(lines, 4, sf::Lines);
	}
	return 0;

}