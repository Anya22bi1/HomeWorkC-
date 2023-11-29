#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>


double CreateSquareTriangle(int a, int b)
{
	double SquareTriangle = (a * b) / 2; //формулы площади прямоугольного треугольника
	return SquareTriangle;
}

double CreateHypotenuse(int a, int b)
{
	double Hypotenuse = sqrt(pow(a, 2) + pow(b, 2)); //формула поиска гипотенузы
	return Hypotenuse;
}

int main()
{
	/*Task #3*/
	std::cout << "Task 3" << std::endl;
	//вводим перменные, в которые загрузим введенные пользователем значения
	int cathet1 = 0;
	int cathet2 = 0;
	std::cout << "Enter cathet 1 and cathet 2: " << std::endl;
	std::cin >> cathet1 >> cathet2; //считываем вводимые значения
	std::cout << "Result Task 3: Square = " << CreateSquareTriangle(cathet1, cathet2) /*используем функцию*/ << ", Hypotenuse = " <<
	CreateHypotenuse(cathet1, cathet2)/*используем функцию*/;

	return 0;
}