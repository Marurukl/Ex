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
		std::cout << "\nВведите 1 цифру : ";
		std::cin >> num1;

	}
	void Calculator::SetNumber2() {
		std::cout << "\nВведите 2 цифру : ";
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
	}//Деление
	void Calculator::MultiplicationNumber()
	{
		SetNumber1();
		SetNumber2();
		result = num1 * num2;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//Умножение
	void Calculator::TakingFromSquare() 
	{
		SetNumber1();
		result = sqrt((double)num1);
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//Взятие из под квадратного корня
	void Calculator::ErectioToTheSquare() 
	{
		SetNumber1();
		result = num1 * num1;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//Возведение к квадрат
	void Calculator::OneDivideX()
	{
		SetNumber1();
		double number;
		number = num1;
		result = 1 / number;
		std::cout << "\n" << result;
		std::cin.get(); std::cin.get();
	}//1/х
	void Calculator::ShowMenu() {
		system("cls");
		std::cout << " 0 - выход \n 1 -	Написать цифру \n  2 - Смена знака у числа на противоположный \n 3 - Сложение \n 4 - Вычитание \n 5 - Деление \n 6 - Умножение \n 7 - Взятие из под квадратного корня \n 8 - Возведение к квадрат \n 9 - 1/х";
	}
	
}