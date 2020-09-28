#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	float x1, y1, x2, y2;
	cout << "Введите координаты двух противоположных вершин прямоугольника: ";
	cin >> x1 >> y1 >> x2 >> y2;

	float a, b, P, S;
	a = abs(x2 - x1);
	b = abs(y2 - y1);
	P = 2 * (a + b);
	S = a * b;

	cout << "Периметр данного прямоугольника равен " << P << endl;
	cout << "Площадь данного прямоугольника равна " << S << endl;

	return 0;
}
