/*Відомо, що 1 дюйм дорівнює 2.54 см.
Розробити додаток, який переводить дюйми в сантиметри і навпаки.
Діалог з користувачем реалізувати через систему меню.*/
#include<iostream>
using namespace std;
int main() {
	cout << "Enter the size: ";
	float Size;
	cin >> Size;
	cout << "Select the desired action:\n"
		"1. Convert to inches\n"
		"2. Convert to centimeters\n";
	int N;
	cin >> N;
	switch (N){
		case 1:
			cout << "The number " << Size << " is in inches " << Size / 2.54 << endl;
		break;
		case 2:
			cout << "The number " << Size << " is in centimeters " << Size * 2.54 << endl; 
		break;
		default: cout << "Incorrectly selected option!\n";
	}
}
