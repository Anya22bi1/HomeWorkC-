#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #11*/
	std::cout << "Task 11" << std::endl;
	//������ � ������������� ���������� ��� ���������� �������� ������������� ������
	double cost = 0.;
	std::cout << "Enter cost: " << std::endl;
	std::cin >> cost;
	if (cost > 1000)
	{
		double NewCost = cost - (cost * 0.1); //������� ��� ��������� �� �������
		std::cout << "Result Task 11: discounted price = " << NewCost;
	}
	else //�������, ����� ��������� ������ 1000
	{
		std::cout << "Result Task 11: cost less than 1000, cost = " << cost;
	}
	return 0;
}