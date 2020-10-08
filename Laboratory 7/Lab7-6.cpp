#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	double A1, B1, C1, A2, B2, C2, delta, deltaX, deltaY, x, y;

	cout << "Введите коэффициенты A1, B1, C1:" << endl;
	cin >> A1 >> B1 >> C1;
	cout << "Введите коэффициенты A2, B2, C2:" << endl;
	cin >> A2 >> B2 >> C2;

	delta = A1 * B2 - B1 * A2;
	deltaX = C1 * B2 - B1 * C2;
	deltaY = A1 * C2 - C1 * A2;
	x = deltaX / delta;
	y = deltaY / delta;
	cout << "Решение системы линейных уравнений вида" << endl
		 << A1 << "x + " << B1 << "y = " << C1 << endl
		 << A2 << "x + " << B2 << "y = " << C2 << ':' << endl << endl
		 << "x = " << x << " y = " << y << endl;

	return 0;
}