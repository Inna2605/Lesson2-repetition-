/*Напишіть програму, яка перевіряє число, введене з
клавіатури на парність.*/

#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "uk_UA");
	
	cout << "Введiть число: ";
	int number;
	cin >> number;
	//(number % 2 == 0) ? cout << "Число " << number << " парне!\n" : cout << "Число " << number << " не парне!\n";

	cout << "Число " << number << ((number % 2 == 0) ? " парне!\n" : " не парне!\n");
}