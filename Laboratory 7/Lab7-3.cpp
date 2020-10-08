#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	int X, Y;
	double A;

	cout << "Введите сколько кг конфет купили: " << endl;
	cin >> X;
	cout << "Введите сколько это стоило: " << endl;
	cin >> A;
	cout << "Цена за 1 кг конфет: " << A / X << endl;

	cout << "Введите любое количество кг: " << endl;
	cin >> Y;
	cout << "Цена за " << Y << " кг конфет: " << A / X * Y << endl;

	return 0;
}