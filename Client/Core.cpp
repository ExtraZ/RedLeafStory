#include "Global.h"
#include "Items\MapleEquip.h"

int main(int argc, char *argv[])
{
	//Initialize window object
	sf::RenderWindow window(sf::VideoMode(800, 600), "RedLeafStory");

	//Main loop
	while (window.isOpen())
	{
		//Event polling and handling
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		// Rendering goes here

		window.display();
	}
	return 0;
}