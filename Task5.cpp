#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #5*/
	std::cout << "Task 5" << std::endl;
	//создаЄм и инициализируем переменные дл€ фиксации вводимых пользователем значений
	int x = 0;
	int y = 0;
	//»нициализируем переменные дл€ сохранени€ результата кода
	double radius = 0.;
	double corner = 0.;
	std::cout << "Enter coordinates x, y = " << std::endl;
	std::cin >> x >> y; //считываем вводимые данные
	radius = sqrt(pow(x, 2) + pow(y, 2)); //формула дл€ расчЄта пол€рного радиуса
	corner = atan(y / x); //формула дл€ расчЄта пол€рного угла
	std::cout << "Result Task 5: polar radius = " << radius <<
		", corner = " << corner;
	return 0;
}