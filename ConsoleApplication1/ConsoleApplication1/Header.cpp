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
				if (key == 0) {
					break;
				}
				else if (key == 1) {

				}
				else if (key == 2) {

				}
				else if (key == 3) {

				}
				else if (key == 4) {

				}
				else if (key == 5) {

				}
				else if (key == 6) {

				}
				else if (key == 7) {

				}
				else if (key == 8) {

				}
				else if (key == 9) {

				}
			}
			ShowMenu();
		}
		
	}
	void Calculator::ChangeSignNumber() {
		~num1 + 1;
	}
	void Calculator::SetNumber1() {
		std::cout << "������� 1 ����� : ";
		std::cin >> num1;

	}
	void Calculator::SetNumber2() {
		std::cout << "������� 2 ����� : ";
		std::cin >> num2;
	}
	void Calculator::AdditionNumber()
	{
		result = num1 + num2;
	}
	void Calculator::SubtractionNumber()
	{
		result = num1 - num2;
	}
	void Calculator::DivisionNumber() 
	{
		result = num1 / num2;
	}//�������
	void Calculator::MultiplicationNumber()
	{
		result = num1 * num2;
	}//���������
	void Calculator::TakingFromSquare() 
	{
		result = sqrt((double)num1);
	}//������ �� ��� ����������� �����
	void Calculator::ErectioToTheSquare() 
	{
		result = num1 * num1;
	}//���������� � �������
	void Calculator::OneDivideX()
	{
		result = 1 / num1;
	}//1/�
	void Calculator::ShowMenu() {
		system("cls");
		std::cout << " 0 - ����� /n 1 -	�������� ����� /n  2 - ����� ����� � ����� �� ��������������� /n 3 - �������� /n 4 - ��������� /n 5 - ������� /n 6 - ��������� /n 7 - ������ �� ��� ����������� ����� /n 8 - ���������� � ������� /n 9 - 1/�";
	}
}