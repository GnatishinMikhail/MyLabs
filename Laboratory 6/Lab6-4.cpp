#include <iostream>
#include <cmath>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	float x, y;
	cout << "Введите аргумент функции: \n";
	cin >> x;

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	cout << "Значение функции y = 3x^6 - 6x^2 - 7 : \n" << y << endl;

	return 0;
}
