#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    // Назва і розмір вікна
	RenderWindow window(sf::VideoMode(1920, 1080), "random nazva", Style::Fullscreen);
	CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Red);

    // Головний цикл
    while(window.isOpen())
    {
        //Меню
		
		
		
		// Обробляємо події в циклі
        sf::Event event;
        while(window.pollEvent(event))
        {
            // вимикання по кнопці escape
            if(event.type == sf::Event::Closed || 
              (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }

        // Очистка
        window.clear();
        // Тут будут вызываться функции обновления и отрисовки объектов
        // Отрисовка
		window.draw(shape);
        window.display();
    }

   
	
	
	return 0;
}