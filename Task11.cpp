#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #11*/
	std::cout << "Task 11" << std::endl;
	//—оздаЄм и инциализируем переменную дл€ сохранени€ вводимых пользователем данных
	double cost = 0.;
	std::cout << "Enter cost: " << std::endl;
	std::cin >> cost;
	if (cost > 1000)
	{
		double NewCost = cost - (cost * 0.1); //формула дл€ стоимости со скидкой
		std::cout << "Result Task 11: discounted price = " << NewCost;
	}
	else //вариант, когда стоимость меньше 1000
	{
		std::cout << "Result Task 11: cost less than 1000, cost = " << cost;
	}
	return 0;
}