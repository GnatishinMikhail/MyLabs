#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	float x, y;
	cout << "Введите аргумент функции: \n";
	cin >> x;

	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;

	cout << "Значение функции y = 4(x-3)^6 - 7(x-3)^3 + 2: \n" << y << endl;

	return 0;
}