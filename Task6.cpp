#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #6*/
	std::cout << "Task 6" << std::endl;
	//������ � ������������� ����������
	double radius = 0.;
	double corner = 0.;
	//������ � �������������� ����������, � ������� ����� ��������� ���������
	double x = 0.;
	double y = 0.;
	std::cout << "Enter polar radius, polar corner: " << std::endl;
	std::cin >> radius >> corner; //��������� �������� ������
	x = radius * cos(corner); //������� ��� ������� ���������� �
	y = radius * sin(corner); //������� ��� ������� ���������� Y
	std::cout << "Result Task 6: Coordinates = " << x << ", " << y;
	return 0;
}