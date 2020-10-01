#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	float A, help, help2;
	cout << "Введите число: \n";
	cin >> A;

	help = A * A;
	help2 = help * help;
	help = help2 * A;
	help2 = help * help * help;

	cout << "Данное число в пятнадцатой степени равно: \n" << help2 << endl;

	return 0;
}