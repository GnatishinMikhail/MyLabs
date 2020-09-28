#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	float x1, y1, x2, y2, x3, y3;
	cout << "Введите координаты трех вершин треугольника: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	float a, b, c, p, P, S;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = a + b + c;
	p = P / 2; //полупериметр
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "Периметр данного треугольника равен " << P << endl;
	cout << "Площадь данного треугольника равна " << S << endl;

	return 0;
}