#pragma once
#ifndef Calculator_H
#define Calculator_H
namespace calculator
{
	class Calculator
	{
	private:
		int num1, num2;
		double result;
	public:
		Calculator();
		~Calculator();
		void Handler(int number1, int number2);//
		void ChangeSignNumber();//Смена знака у числа на противоположный
		void SetNumber1();//
		void SetNumber2();//
		void AdditionNumber();//Сложение
		void SubtractionNumber();//Вычитание
		void DivisionNumber();//Деление
		void MultiplicationNumber();//Умножение
		void TakingFromSquare();//Взятие из под квадратного корня
		void ErectioToTheSquare();//Возведение к квадрат
		void OneDivideX();//1/х
		void ShowMenu();
		
	};


}
#endif // !Calculator
