#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #5*/
	std::cout << "Task 5" << std::endl;
	//������ � �������������� ���������� ��� �������� �������� ������������� ��������
	int x = 0;
	int y = 0;
	//�������������� ���������� ��� ���������� ���������� ����
	double radius = 0.;
	double corner = 0.;
	std::cout << "Enter coordinates x, y = " << std::endl;
	std::cin >> x >> y; //��������� �������� ������
	radius = sqrt(pow(x, 2) + pow(y, 2)); //������� ��� ������� ��������� �������
	corner = atan(y / x); //������� ��� ������� ��������� ����
	std::cout << "Result Task 5: polar radius = " << radius <<
		", corner = " << corner;
	return 0;
}