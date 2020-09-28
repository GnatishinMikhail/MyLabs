#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	float x1, x2, y1, y2;
	cout << "Введите координаты двух точек в плоскости:";
	cin >> x1 >> y1 >> x2 >> y2;

	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	cout << "Расстояние между этими двумя точками равно: " << distance;

	return 0;
}