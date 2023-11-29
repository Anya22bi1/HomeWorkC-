#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #8*/
	std::cout << "Task 8" << std::endl;
	//создаЄм и инциализируем переменные дл€ сохранени€ вводимых пользователем данных
	int a = 0;
	int b = 0;
	int c = 0;
	//создаЄм и инциализируем переменные дл€ сохранени€ и расчЄта результатов
	double median11 = 0.; //медианы »сходного треугольника
	double median12 = 0.;
	double median13 = 0.;
	double median21 = 0.; //медианы треугольника, сторонами которого €вл€ютс€ медианы исходного треугольника
	double median22 = 0.;
	double median23 = 0.;
	std::cout << "Enter the sides of the original triangle(a, b, c): " << std::endl;
	std::cin >> a >> b >> c;
	//найдЄм медианы исходного треугольника
	median11 = (sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2))) / 2;
	median12 = (sqrt(2 * (pow(c, 2) + pow(a, 2)) - pow(b, 2))) / 2;
	median13 = (sqrt(2 * (pow(b, 2) + pow(a, 2)) - pow(c, 2))) / 2;
	//считаем эти медианы сторонами нужного нам треугольника и ищем новые медианы
	double a2 = median11;
	double b2 = median12;
	double c2 = median13;
	median21 = (sqrt(2 * (pow(b2, 2) + pow(c2, 2)) - pow(a2, 2))) / 2;
	median22 = (sqrt(2 * (pow(c2, 2) + pow(a2, 2)) - pow(b2, 2))) / 2;
	median23 = (sqrt(2 * (pow(b2, 2) + pow(a2, 2)) - pow(c2, 2))) / 2;
	std::cout << "Result Task 8: mediane 1 = " << median21 << ", mediane 2 = " << median22 <<
		", mediane 3 = " << median23;
	return 0;
}