#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #13*/
	std::cout << "Task 13" << std::endl;
	std::srand(std::time(nullptr));
	std::cout << "Two random numbers [0, 9]: " << std::endl;
	int comp = 1; /*���������� ��� ������� ����������(� ��� ����������� ���������� �����)*/
	for (int n = 0; n != 2; ++n) /*��� ������, �� ��� ����� ��� ��������� �����*/
	{
		int x = 10;
		while (x > 9) /*���������� �� 0 �� 9 (��� � �������)*/
			x = 1 + std::rand() / ((9 + 1u) / 6); /*������ ��������� �����*/
		std::cout << x << ' ';
		comp *= x; /*������� ���������� ������� (������������)*/
	}
	std::cout << std::endl;
	std::cout << "Enter composition these numbers: " << std::endl;
	int comp_used = 0; //���� ���������� ��� �������� ��������� ������������� ��������
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
	