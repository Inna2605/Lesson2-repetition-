/*�������� ��������, ��� �������� �����, ������� �
��������� �� �������.*/

#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "uk_UA");
	
	cout << "����i�� �����: ";
	int number;
	cin >> number;
	//(number % 2 == 0) ? cout << "����� " << number << " �����!\n" : cout << "����� " << number << " �� �����!\n";

	cout << "����� " << number << ((number % 2 == 0) ? " �����!\n" : " �� �����!\n");
}