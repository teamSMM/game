#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    // ����� � ����� ����
	RenderWindow window(sf::VideoMode(1920, 1080), "random nazva", Style::Fullscreen);
	
	Image heroimage;
	heroimage.loadFromFile("images/hero.png");

	Texture herotexture;
	herotexture.loadFromImage(heroimage);

	Sprite herosprite;
	herosprite.setTexture(herotexture);
	herosprite.setPosition(50, 25);

    // �������� ����
    while(window.isOpen())
    {
        //����
		
		
		
		// ���������� ��䳿 � ����
        sf::Event event;
        while(window.pollEvent(event))
        {
            // ��������� �� ������ escape
            if(event.type == sf::Event::Closed || 
              (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }

        
        window.clear();
       
		window.draw(herosprite);
        window.display();
    }

   
	
	
	return 0;
}