#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>


double CreateIdealWeight(double h, double w)
{
	double IdealWeight = h - 100; //������� ��� ������� ���������� ����
	return IdealWeight;
}


int main()
{
	/*Task #12*/
	std::cout << "Task 12" << std::endl;
	//������ � �������������� ���������� ��� ���������� �������� ������������� ������
	double height = 0.;
	double weight = 0.;
	std::cout << "Enter height and weight: " << std::endl;
	std::cin >> height >> weight; //��������� ������ �������� �������������
	if (CreateIdealWeight(height, weight) != weight) //���� ���������� ��� � ������� �� �����
	{
		/*��� ��������� ������ ���������� � ��������� � ��� �������� �������*/
		double IdealWeight = CreateIdealWeight(height, weight); 
		if (IdealWeight > weight) //���� ��������� ��� ������ ��������
		{
			std::cout << "Result Task 12: we advise you to gain weight";
		}
		else //���� ��������� ��� ������ ��������
		{
			std::cout << "Result Task 12: we advise you to lose weight";
		}
	}
	else // ���� ���������� ��� � ������� �����
	{
		std::cout << "Result Task 12: Your weight is ideal weight!";
	}
	return 0;
}