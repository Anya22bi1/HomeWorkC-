#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

float CreateSquareTrapeziod(int b1, int b2, int h)
{
	float square = ((b1 + b2) * h) / 2; //������� ������� ��������
	return square;
}

int main()
{
	/*Task #1*/
	std::cout << "Task 1" << std::endl;
	//������ ���������� ��� ����������: b1, b2 - ��������� ��������, h - ������
	int b1 = 0;
	int b2 = 0;
	int h = 0;
	std::cout << "Enter b1, b2, h: " << std::endl;
	std::cin >> b1 >> b2 >> h; //��������� ���������
	std::cout << "Result Task 1: Square = " << CreateSquareTrapeziod(b1, b2, h); //���������� �������
	
	return 0;
}