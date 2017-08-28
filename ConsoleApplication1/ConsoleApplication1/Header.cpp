#include "Header.h"
#include <iostream>
#include <math.h>
#include <conio.h>

namespace calculator
{
	Calculator::Calculator() {
		num1 = num2 = 0;
		result = 0;
	}
	Calculator::~Calculator() {

	}
	void Calculator::Handler(int number1, int number2) {
		int key;
		ShowMenu();
		for (;;) {
			if (kbhit()) {
				key = getch();
				std::cout << key;

				if (key == 48) {
					break;
				}
				else if (key == 27) {
					num1 = num2 = 0;
					result = 0;
					ShowMenu();
				}
				else if (key == 49) {
					
					ShowMenu();
				}
				else if (key == 50) {
					ChangeSignNumber();
					ShowMenu();
				}
				else if (key == 51) {
					AdditionNumber();
					ShowMenu();
				}
				else if (key == 52) {
					SubtractionNumber();
					ShowMenu();
				}
				else if (key == 53) {
					DivisionNumber();
					ShowMenu();
				}
				else if (key == 54) {
					MultiplicationNumber();
					ShowMenu();
				}
				else if (key == 55) {
					TakingFromSquare();
					ShowMenu();

				}
				else if (key == 56) {
					ErectioToTheSquare();
					ShowMenu();

				}
				else if (key == 57) {
					OneDivideX();
					ShowMenu();

				}
			}
		}
		
	}
	void Calculator::ChangeSignNumber() {
		SetNumber1();
		num1 = -num1;
		std::cout << "\n" << num1;
		std::cin.get(); std::cin.get();
	}
	void Calculator::SetNumber1() {
		std::cout << "\n������� 1 ����� : ";
		std::cin >> num1;

	}
	void Calculator::SetNumber2() {
		std::cout << "\n������� 2 ����� : ";
		std::cin >> num2;
	}
	void Calculator::AdditionNumber()
	{
		SetNumber1();
		SetNumber2();
		result = num1 + num2;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}
	void Calculator::SubtractionNumber()
	{
		SetNumber1();
		SetNumber2();
		result = num1 - num2;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}
	void Calculator::DivisionNumber() 
	{
		SetNumber1();
		SetNumber2();
		result = num1 / num2;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//�������
	void Calculator::MultiplicationNumber()
	{
		SetNumber1();
		SetNumber2();
		result = num1 * num2;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//���������
	void Calculator::TakingFromSquare() 
	{
		SetNumber1();
		result = sqrt((double)num1);
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//������ �� ��� ����������� �����
	void Calculator::ErectioToTheSquare() 
	{
		SetNumber1();
		result = num1 * num1;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//���������� � �������
	void Calculator::OneDivideX()
	{
		SetNumber1();
		double number;
		number = num1;
		result = 1 / number;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//1/�
	void Calculator::ShowMenu() {
		system("cls");
		std::cout << " 0 - ����� \n 1 -	�������� ����� \n  2 - ����� ����� � ����� �� ��������������� \n 3 - �������� \n 4 - ��������� \n 5 - ������� \n 6 - ��������� \n 7 - ������ �� ��� ����������� ����� \n 8 - ���������� � ������� \n 9 - 1/�";
	}
	
}