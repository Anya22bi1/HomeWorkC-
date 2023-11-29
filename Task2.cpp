#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

float CalculateSquareCircle(int r)
{
	float pi = 3.14; //Число Пи
	float Square = pi * pow(r, 2);  //формула площади
	return Square;
}

float CalculateLongCircle(int r)
{
	float pi = 3.14; //Число Пи
	float Long = 2 * pi * r; //формула длины окружности (через радиус)
	return Long;
}

int main()
{
	/*Task #2*/
	std::cout << "Task 2" << std::endl;
	int radius = 0; //вводим переменную, в которую будем считывать вводимый радиус
	std::cout << "Enter radius: " << std::endl;
	std::cin >> radius; //считываем введённое значение
	std::cout << "Result Task 2: Square = " << CalculateSquareCircle(radius) /*используем функцию*/
		<< ", Long = " << CalculateLongCircle(radius)/*используем функцию*/;
	return 0;
}