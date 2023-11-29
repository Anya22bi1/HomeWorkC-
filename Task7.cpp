#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #7*/
	std::cout << "Task 7" << std::endl;
	//Создаём и инциализируем переменные для сохранения вводимых пользователем данных
	//исопльзуем для расчёт формулу квадратног уровнения ax^2 + bx + c = 0
	double a = 0.;
	double b = 0.;
	double c = 0.;
	//Создаём и инициализируем переменные для расчёта и сохранения результатов
	double diskr = 0.; //Перменная для дискриминанта
	double x1 = 0.; //перменная для Корня 1
	double x2 = 0.; //перменная для Корня 2
	std::cout << "Enter a, b, c in the equation: " << std::endl;
	std::cin >> a >> b >> c; //считываем вводимые пользователем данные
	diskr = pow(b, 2) - (4 * a * c); //формула для расчёта дискриминанта
	if (diskr < 0)
	{
		std::cout << "Result Task 7: There are no roots.." << std::endl;
	}
	if (diskr == 0)
	{
		x1 = (-b) / (2 * a);  //формула для расчёта корня
		std::cout << "Result Task 7: There is one root: x = " << x1;
	}
	if (diskr > 0)
	{
		x1 = (-b + sqrt(diskr)) / (2 * a); //формула для расчёта корня 1
		x2 = (-b - sqrt(diskr)) / (2 * a); //формула для расчёта корня 2
		std::cout << "Result Task 7: There are two roots: x1 = " << x1 <<
			", x2 = " << x2;
	}
	return 0;
}