#include <iostream>
#define _USE_MATCH_DEFINES
#include <cmath>

int main()
{
	/*Task #4*/
	std::cout << "Task 4" << std::endl;
	//������� � �������������� ����������, � ������� ����� �������� �������� ������������� ������
	int number = 0;
	int sum = 0; /*������ ���������� ��� ����� ����� ����*/
	std::cout << "Enter a four-digit number: " << std::endl;
	std::cin >> number; //��������� �������� ��������
	while (number != 0) 
	{
		sum += number % 10; /*���������� ����� ����������� ������� �� 10 (�� ����� ����������)*/
		number /= 10; /*����� ���� ����� �� 10, ����� ����������� ��������� ����� �����*/
	}
	std::cout << "Result Task 4: Summa = " << sum;
	return 0;
}