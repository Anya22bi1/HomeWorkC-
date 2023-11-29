#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>


int main()
{
	/*Task #9*/
	std::cout << "Task 9" << std::endl;
	//создаем и инициализируем переменные для сохранения вводимых пользователем данных
	int second = 0;
	std::cout << "Enter seconds: " << std::endl;
	std::cin >> second;
	int hour = second / 3600; //формула для расчёта целого количества часов 
	int minute = second / 60; //формула для расчёта целого количества минут 
	std::cout << "Result Task 9: hour =" << hour << ", minute = " << minute;
	return 0;
}