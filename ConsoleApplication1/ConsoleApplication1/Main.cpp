#include <iostream>
#include"Header.h"
using namespace std;

	int main() {
		setlocale(LC_ALL, "rus");
		int num1 = 0, num2 = 0 ;
		calculator::Calculator calculatorr;
		calculatorr.Handler(num1, num2);
		return 0;
	}