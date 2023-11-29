#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #10*/
	std::cout << "Task 10" << std::endl;
	//создаем и инициализируем переменные для сохранения вводимых пользователем данных
	int a = 0;
	int b = 0;
	int c = 0;
	std::cout << "Enter a, b, c: " << std::endl;
	std::cin >> a >> b >> c; //считываем данные, введённые пользователем
	if (a == b)
	{
		std::cout << "Result Tsk 10: Triangle - isosceles (a=b)";
	}
	if (a == c)
	{
		std::cout << "Result Tsk 10: Triangle - isosceles (a=c)";
	}
	if (b == c)
	{
		std::cout << "Result Tsk 10: Triangle - isosceles (b=c)";
	}
	if (a != b && a != c && b != c)
	{
		std::cout << "Result Tsk 10: Triangle doesn't isosceles";
	}
	return 0;
}