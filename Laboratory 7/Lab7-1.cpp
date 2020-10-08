#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	const float PI = 3.14;

	int angle;
	cout << "Введите величину угла" << endl;
	cin >> angle;
	cout << "Величина угла в радианах: " << angle * PI / 180;

	return 0;
}