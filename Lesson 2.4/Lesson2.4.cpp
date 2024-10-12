/*Написати програму-калькулятор.
Користувач вводить два числа і вибирає арифметичну дію (+, –, *, /, максимум, мінімум).
Вивести на екран результат дії.*/

#include<iostream>
using namespace std;
int main() {
	enum { Plus = 1, Minus, Mnozutu, Dilutu, Max, Min};
	cout << "Enter two numbers to calculate: ";
	float Num1, Num2, Rez;
	cin >> Num1 >> Num2;
	cout << "Select the desired action\n"
		<< "1. +\n"
		<< "2. -\n"
		<< "3. *\n"
		<< "4. /\n"
		<< "5. max\n"
		<< "6. min\n";
	int H;
	cin >> H;
	switch (H) {
	case Plus:
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		break;
	case Minus:
		(Num1 > Num2) ? (cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl) : (cout << Num2 << " - " << Num1 << " = " << Num2 - Num1 << endl);
		break;
	case Mnozutu:
		cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
		break;
	case Dilutu:
		(Num1 > Num2) ? (cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl) : (cout << Num2 << " / " << Num1 << " = " << Num2 / Num1 << endl);
		break;
	case Max:
		(Num1 > Num2) ? (cout << "max  = " << Num1 << endl) : (cout << "max = " << Num2 << endl);
		break;
	case Min:
		(Num1 < Num2) ? (cout << "min = " << Num1 << endl) : (cout << "min = " << Num2 << endl);
		break;
	default: cout << "Incorrectly selected action!\n";
	}
}