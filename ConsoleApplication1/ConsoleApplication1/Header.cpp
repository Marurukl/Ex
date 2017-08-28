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
		ShowMenuFirst();
		for (;;) {
			if (kbhit()) {
				key = getch();
				

				if (key == 48) {
					break;
				}
				else if (key == 27) {
					num1 = num2 = 0;
					result = 0;
					ShowMenuFirst();
				}
				else if (key == 49) {
					for (;;)
					{
						if (kbhit()) {
							key = getch();
							if (key == 65) {
								break;
							}
							else if (key == 83) {
								RaisingNumberAnyDegree();
								ShowMenuSecond();
							}
							else if (key == 68) {
								SinCosTan();
								ShowMenuSecond();
							}
							else if (key == 70) {
								Log();
								ShowMenuSecond();
							}
							else if (key == 71) {
								Factorial();
								ShowMenuSecond();
							}
						}
					}
					
				}
				else if (key == 50) {
					ChangeSignNumber();
					ShowMenuFirst();
				}
				else if (key == 51) {
					AdditionNumber();
					ShowMenuFirst();
				}
				else if (key == 52) {
					SubtractionNumber();
					ShowMenuFirst();
				}
				else if (key == 53) {
					DivisionNumber();
					ShowMenuFirst();
				}
				else if (key == 54) {
					MultiplicationNumber();
					ShowMenuFirst();
				}
				else if (key == 55) {
					TakingFromSquare();
					ShowMenuFirst();

				}
				else if (key == 56) {
					ErectioToTheSquare();
					ShowMenuFirst();

				}
				else if (key == 57) {
					OneDivideX();
					ShowMenuFirst();

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
	void Calculator::ShowMenuFirst() {
		system("cls");
		std::cout << " 0 - выход \n 1 -	2 страница \n  2 - Смена знака у числа на противоположный \n 3 - Сложение \n 4 - Вычитание \n 5 - Деление \n 6 - Умножение \n 7 - Взятие из под квадратного корня \n 8 - Возведение к квадрат \n 9 - 1/х";
	}
	void Calculator::ShowMenuSecond() {
		system("cls");
		std::cout << " A - назад \n S - Возведение в любую степень \n D - Cos,Sin,Tan \n F - log \n G-Факториал";
	}
	void Calculator::RaisingNumberAnyDegree(){
		SetNumber1();
		int count;
		std::cout << "Введите Число для возвеления степени : ";
		std::cin >> count;
		for (size_t i = 0; i < count; i++)
		{
			num1 *= num1;
		}
		result = num1;
		std::cout << "\n" << num1;
		std::cin.get(); std::cin.get();
	}
	void Calculator::SinCosTan(){
		int degree;
		std::cout << "Введите градус : ";
		std::cin >> degree;
		std::cout << "Sin = " << sin(degree*PI / 180) << "\nCos = " << cos(degree*PI / 180) <<"\nTan = " << tan(degree*PI / 180);
		std::cin.get(); std::cin.get();
	}
	void Calculator::Log(){
		double val;
		result = log(val);
		std::cout << "Логариф числа : " << result;
		std::cin.get(); std::cin.get();
	}
	long double Calculator::fact(int N)
	{
		if (N < 0) 
			return 0; 
		if (N == 0) 
			return 1; 
		else 
			return N * fact(N - 1); 
	}
	void Calculator::Factorial() {
		SetNumber1();
		std::cout << "Логариф числа : " << fact(num1);
		std::cin.get(); std::cin.get();
	} 
}