#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>


double CreateSquareTriangle(int a, int b)
{
	double SquareTriangle = (a * b) / 2; //������� ������� �������������� ������������
	return SquareTriangle;
}

double CreateHypotenuse(int a, int b)
{
	double Hypotenuse = sqrt(pow(a, 2) + pow(b, 2)); //������� ������ ����������
	return Hypotenuse;
}

int main()
{
	/*Task #3*/
	std::cout << "Task 3" << std::endl;
	//������ ���������, � ������� �������� ��������� ������������� ��������
	int cathet1 = 0;
	int cathet2 = 0;
	std::cout << "Enter cathet 1 and cathet 2: " << std::endl;
	std::cin >> cathet1 >> cathet2; //��������� �������� ��������
	std::cout << "Result Task 3: Square = " << CreateSquareTriangle(cathet1, cathet2) /*���������� �������*/ << ", Hypotenuse = " <<
	CreateHypotenuse(cathet1, cathet2)/*���������� �������*/;

	return 0;
}