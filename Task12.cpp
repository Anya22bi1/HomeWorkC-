#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>


double CreateIdealWeight(double h, double w)
{
	double IdealWeight = h - 100; //функция для расчёта идеального веса
	return IdealWeight;
}


int main()
{
	/*Task #12*/
	std::cout << "Task 12" << std::endl;
	//создаём и инициализируем переменные для сохранения вводимых пользователем данных
	double height = 0.;
	double weight = 0.;
	std::cout << "Enter height and weight: " << std::endl;
	std::cin >> height >> weight; //считываем данные вводимые пользователем
	if (CreateIdealWeight(height, weight) != weight) //если иделальный вес и текущий НЕ равны
	{
		/*для упрощения создаём переменную и сохраняем в ней значение функции*/
		double IdealWeight = CreateIdealWeight(height, weight); 
		if (IdealWeight > weight) //Если идеальной вес больше текущего
		{
			std::cout << "Result Task 12: we advise you to gain weight";
		}
		else //Если идеальной вес меньше текущего
		{
			std::cout << "Result Task 12: we advise you to lose weight";
		}
	}
	else // если иделальный вес и текущий равны
	{
		std::cout << "Result Task 12: Your weight is ideal weight!";
	}
	return 0;
}