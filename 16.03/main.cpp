#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number1, first_half, second_half;
	int number2;
	int num3[7], res3;
	int fuel_copas = 300, S_ab, S_bc, weight;


	while (true)
	{
		while (true)	//������������� �����
		{
			std::cout << "������� ������������ �����: ";
			std::cin >> number1;
			if (number1 > 999999 || number1 < 100000)
			{
				std::cerr << "������: ������� �� ������������ �����\n";
				continue;
			}
		}

		first_half = number1 / 100000 + number1 % 100000 / 10000 + number1 % 10000 / 1000;
		second_half = number1 % 1000 / 100 + number1 % 100 / 10 + number1 % 10;

		if (first_half == second_half)
		{
			std::cout << "���� ����� ����������!\n";
		}
		else
		{
			std::cout << "���� ����� �� ����������!\n";
		}


		while (true)	//�������������� �����
		{
			std::cout << "������� �������������� �����: ";
			std::cin >> number2;
			if (number2 > 9999 || number2 < 1000)
			{
				std::cerr << "������: ������� �� �������������� �����\n";
				continue;
			}
			break;
		}
		std::cout << number2 / 1000 * 100 + number2 % 1000 / 100 * 1000 + number2 % 100 / 10 + number2 % 10 * 10 << "\n";


		std::cout << "������� ���� �����\n";	//���� 7 �����
		for (int i = 0; i < 7; i++)
		{
			std::cout << i + 1 << ": ";
			std::cin >> num3[i];
		}
		res3 = num3[0];

		for (int i = 1; i < 8; i++)
		{
			if (num3[i] > res3)
			{
				res3 = num3[i];
			}
		}
		std::cout << "����������: " << res3 << "\n";

		

		while (true)	//������
		{
			std::cout << "������� ���������� A-B: ";
			std::cin >> S_ab;
			std::cout << "������� ���������� B-C: ";
			std::cin >> S_bc;

			if (S_ab < 0 || S_bc < 0)
			{
				std::cerr << "Error: incorrect input choice\n";
				continue;
			}
			break;
		}
		while (true)
		{
			std::cout << "�������� ��� ��� ���������: ";
			std::cin >> weight;
			if (weight < 0)
			{
				std::cerr << "Error: incorrect input choice\n";
				continue;
			}
			if (weight >= 2000)
			{
				std::cout << "������ �� ��������� ���� 2000 �� � �����\n";
				continue;
			}
			break;
		}

		if (weight <= 500 && 300 - S_ab > 0 && 300 - S_bc > 0)
		{
			if (S_bc - 300 + S_ab < 0)
			{
				std::cout << 0 << "\n";
			}
			else
			{
				std::cout << S_bc - 300 + S_ab << "\n";
			}
		}
		else if (weight <= 1000 && 300 - 4 * S_ab > 0 && 300 - 4 * S_bc > 0)
		{
			if (4 * S_bc - 300 + 4 * S_ab < 0)
			{
				std::cout << 0 << "\n";
			}
			else
			{
				std::cout << 4 * S_bc - 300 + 4 * S_ab << "\n";
			}
		}
		else if (weight <= 1500 && 300 - 7 * S_ab > 0 && 300 - 7 * S_bc > 0)
		{
			if (7 * S_bc - 300 + 7 * S_ab < 0)
			{
				std::cout << 0 << "\n";
			}
			else
			{
				std::cout << 7 * S_bc - 300 + 7 * S_ab << "\n";
			}
		}
		else if (weight < 2000 && 300 - 9 * S_ab > 0 && 300 - 9 * S_bc > 0)
		{
			if (9 * S_bc - 300 + 9 * S_ab < 0)
			{
				std::cout << 0 << "\n";
			}
			else
			{
				std::cout << 9 * S_bc - 300 + 9 * S_ab << "\n";
			}
		}
		else
		{
			std::cout << "���������� �������� �� ��������� ��������!\n";
		}
	}
}