#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	const double PI = 3.14;
	double angle;

	cout << "Введите значение угла в радианах: " << endl;
	cin >> angle;
	cout << "Значение угла в градусах: " << angle * 180 / PI;

	return 0;
}