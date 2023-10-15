#include<iostream>
#include<SFML/Graphics.hpp>
using namespace sf;
using namespace std;
int main()
{
	VideoMode vm(800, 600);
	RenderWindow window(vm, "Viewer");
	Event event;
	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			switch (event.type) {
				case Event::MouseButtonPressed:
					if (event.mouseButton.button == Mouse::Right)
						cout << "Right Click\n";
					if (event.mouseButton.button == Mouse::Left)
						cout << "Left Click\n";
					if (event.mouseButton.button == Mouse::Middle)
						cout << "Middle Click\n";
					cout << "Coordinates: \n";
					cout << "- Mouse x: " << event.mouseButton.x << endl;
					cout << "- Mouse y: " << event.mouseButton.y << endl;
					break;
				case Event::KeyPressed:
					cout << "OK!\n";
					break;
				default:
					break;
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}
	};
}

