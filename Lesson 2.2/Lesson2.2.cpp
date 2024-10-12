/*Дано натуральне число а (a <100). Напишіть програму,
яка виводить на екран кількість цифр у цьому числі
і суму цих цифр*/
#include<iostream>
using namespace std;
int main() {
	cout << "Enter a number ";
	int Number;
	cin >> Number;
	int Num = Number, Sum = 0, Quantity = 0;
	if (Number <= 9) {
		Quantity = 1;
		Sum = Number;
		cout << "The number of digits in the number " << Quantity << "\nThe sum of all digits in the number " << Sum << endl;
	}
	else if (Number < 100) {
		Num = Number % 10;
		Number /= 10;
		Quantity = 2;
		Sum = Num + Number;
		cout << "The number of digits in the number " << Quantity << "\nThe sum of all digits in the number " << Sum << endl;
	}
	return 0;
}