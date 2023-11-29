#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #6*/
	std::cout << "Task 6" << std::endl;
	//Создаём и инциализируем переменные
	double radius = 0.;
	double corner = 0.;
	//Создаём и инициализируем переменные, в которых будем сохранять резльутат
	double x = 0.;
	double y = 0.;
	std::cout << "Enter polar radius, polar corner: " << std::endl;
	std::cin >> radius >> corner; //считываем вводимые данные
	x = radius * cos(corner); //Формула для расчёте координаты Х
	y = radius * sin(corner); //Формула для расчёте координаты Y
	std::cout << "Result Task 6: Coordinates = " << x << ", " << y;
	return 0;
}