#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #4*/
	std::cout << "Task 4" << std::endl;
	//создаем и инициализируем переменные, в которые будем заносить вводимые пользователем данные
	int number = 0;
	int sum = 0; /*Создаём переменную для счёта суммы цифр*/
	std::cout << "Enter a four-digit number: " << std::endl;
	std::cin >> number; //считываем вводимое значение
	while (number != 0) 
	{
		sum += number % 10; /*Используем метод остаточного деления на 10 (тк число десятичное)*/
		number /= 10; /*Делим само число на 10, чтобы рассмотреть следующую цифру числа*/
	}
	std::cout << "Result Task 4: Summa = " << sum;
	return 0;
}