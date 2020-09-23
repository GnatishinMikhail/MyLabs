#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	float a, b, aSquare, bSquare;

	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;

	aSquare = a * a;
	bSquare = b * b;

	cout << "Сумма их квадратов равна " << aSquare + bSquare << endl;
	cout << "Разность их квадратов равна " << abs(aSquare - bSquare) << endl;
	cout << "Произведение их квадратов равно " << aSquare * bSquare << endl;
	cout << "Частное их квадратов равно " << aSquare / bSquare << endl;

	return 0;
}