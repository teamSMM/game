#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    
	RenderWindow window(sf::VideoMode(1920, 1080), "random nazva", Style::Fullscreen);
	CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);

    
    while(window.isOpen())
    {
        
		
		
		
		
        sf::Event event;
        while(window.pollEvent(event))
        {
        
            if(event.type == sf::Event::Closed || 
              (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }


        window.clear();

		window.draw(shape);
        window.display();
    }

   
	
	
	return 0;
}
