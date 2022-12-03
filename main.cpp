#include <SFML/Graphics.hpp>

using namespace sf;

const float SC_WIDTH = 800.f;
const float SC_HEIGHT = 600.f;
int main()
{
	// ������, �������, ����������, �������� ������� ����� ����������
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

	// ������� ���� ����������. �����������, ���� ������� ����
	while (window.isOpen())
	{
		// ������������ ������� ������� � �����
		Event event;
		while (window.pollEvent(event))
		{
			// ������������ ����� �� �������� � ����� ������� ����?
			if (event.type == Event::Closed)
				// ����� ��������� ���
				window.close();
		}
		//���������� ��������
		//ball
		const float s1 = 0.5;
		const float s2 = 0.5;
		ball.move(s1, s2);
		// ������� ����
		window.clear();
		// ��������� ���� 
		window.draw(rectangle);
		window.draw(rectangle1);
		window.draw(ball);
		// ����� �� �����
		window.display();
	}

	return 0;
}