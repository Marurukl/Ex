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
		std::cout << "Введите 1 цифру : ";
		std::cin >> num1;

	}
	void Calculator::SetNumber2() {
		std::cout << "Введите 2 цифру : ";
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
	}//Деление
	void Calculator::MultiplicationNumber()
	{
		result = num1 * num2;
	}//Умножение
	void Calculator::TakingFromSquare() 
	{
		result = sqrt((double)num1);
	}//Взятие из под квадратного корня
	void Calculator::ErectioToTheSquare() 
	{
		result = num1 * num1;
	}//Возведение к квадрат
	void Calculator::OneDivideX()
	{
		result = 1 / num1;
	}//1/х
	void Calculator::ShowMenu() {
		system("cls");
		std::cout << " 0 - выход /n 1 -	Написать цифру /n  2 - Смена знака у числа на противоположный /n 3 - Сложение /n 4 - Вычитание /n 5 - Деление /n 6 - Умножение /n 7 - Взятие из под квадратного корня /n 8 - Возведение к квадрат /n 9 - 1/х";
	}
}