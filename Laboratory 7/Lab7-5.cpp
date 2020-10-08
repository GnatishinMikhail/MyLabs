#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	double A, B;

	cout << "Введите коэффициенты A и B, где A не равен нулю: " << endl;
	cin >> A >> B;
	
	cout << "Корень линейного уравнения A * x + B = 0 равен: " << endl << -B / A << endl;

	return 0;
}