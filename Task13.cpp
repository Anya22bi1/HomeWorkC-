#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #13*/
	std::cout << "Task 13" << std::endl;
	std::srand(std::time(nullptr));
	std::cout << "Two random numbers [0, 9]: " << std::endl;
	int comp = 1; /*переменная для расчёта результата(в ней фиксируется правильный ответ)*/
	for (int n = 0; n != 2; ++n) /*идём дважды, тк нам нужно два рандомных числа*/
	{
		int x = 10;
		while (x > 9) /*промежуток от 0 до 9 (дан в задании)*/
			x = 1 + std::rand() / ((9 + 1u) / 6); /*создаём рандомное число*/
		std::cout << x << ' ';
		comp *= x; /*считаем правильное решение (произведение)*/
	}
	std::cout << std::endl;
	std::cout << "Enter composition these numbers: " << std::endl;
	int comp_used = 0; //задём переменную для фиксации введённого пользователем значания
	std::cin >> comp_used;
	if (comp_used == comp)
	{
		std::cout << "Result Task 13: WOW! You don't make mistake";
	}
	else
	{
		std::cout << "Result Task 13: You make mistake, true answer = " << comp;
	}
	return 0;
}
	