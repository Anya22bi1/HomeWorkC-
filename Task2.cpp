#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

float CalculateSquareCircle(int r)
{
	float pi = 3.14; //����� ��
	float Square = pi * pow(r, 2);  //������� �������
	return Square;
}

float CalculateLongCircle(int r)
{
	float pi = 3.14; //����� ��
	float Long = 2 * pi * r; //������� ����� ���������� (����� ������)
	return Long;
}

int main()
{
	/*Task #2*/
	std::cout << "Task 2" << std::endl;
	int radius = 0; //������ ����������, � ������� ����� ��������� �������� ������
	std::cout << "Enter radius: " << std::endl;
	std::cin >> radius; //��������� �������� ��������
	std::cout << "Result Task 2: Square = " << CalculateSquareCircle(radius) /*���������� �������*/
		<< ", Long = " << CalculateLongCircle(radius)/*���������� �������*/;
	return 0;
}