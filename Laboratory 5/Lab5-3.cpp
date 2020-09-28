#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");
	
	float A, B, C;
	cout << "Введите координаты трех точек на числовой оси в возрастающем порядке: ";
	cin >> A >> C >> B;

	float AC, CB, product;
	AC = abs(C - A);
	CB = abs(B - C);
	product = AC * CB;

	cout << "Произведение отрезков AC и CB равно " << product << endl;

	return 0;
}