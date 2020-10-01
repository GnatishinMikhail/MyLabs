#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	float A, help;
	cout << "Введите число: ";
	cin >> A;

	help = A * A;
	A = help * help;
	help = A * A;

	cout << "Данное число в восьмой степени равно: \n" << help << endl;

	return 0;
}