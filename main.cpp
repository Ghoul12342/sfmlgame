#include <SFML/Graphics.hpp>

using namespace sf;

const float SC_WIDTH = 800.f;
const float SC_HEIGHT = 600.f;
int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(800, 600), "SFML Works!");
	window.setFramerateLimit(60.f);
	float rec = 20.f;
	float rec1 = 80.f;
	//1
	RectangleShape rectangle(Vector2f(rec, rec1));
	rectangle.move(50, 280);
	rectangle.setFillColor(Color(181, 12, 0));
	//2
	RectangleShape rectangle1(Vector2f(rec, rec1));
	rectangle1.move(720, 280);
	rectangle1.setFillColor(Color(0, 34, 186));
	
	//3
	float radius = 10.f;
	CircleShape ball(radius);
	ball.move((SC_WIDTH - 2 * radius)/2, (SC_HEIGHT - 2 * radius)/2);
	ball.setFillColor(Color(245, 245, 7));

	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		//обновление объектов
		//ball
		const float s1 = 0.5;
		const float s2 = 0.5;
		ball.move(s1, s2);
		// Очистка окна
		window.clear();
		// Отрисовка окна 
		window.draw(rectangle);
		window.draw(rectangle1);
		window.draw(ball);
		// Вывод на экран
		window.display();
	}

	return 0;
}