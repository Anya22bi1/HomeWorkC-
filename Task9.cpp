#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>


int main()
{
	/*Task #9*/
	std::cout << "Task 9" << std::endl;
	//������� � �������������� ���������� ��� ���������� �������� ������������� ������
	int second = 0;
	std::cout << "Enter seconds: " << std::endl;
	std::cin >> second;
	int hour = second / 3600; //������� ��� ������� ������ ���������� ����� 
	int minute = second / 60; //������� ��� ������� ������ ���������� ����� 
	std::cout << "Result Task 9: hour =" << hour << ", minute = " << minute;
	return 0;
}