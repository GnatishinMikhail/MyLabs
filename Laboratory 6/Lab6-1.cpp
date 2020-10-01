#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	int A, B;
	cout << "Введите два целых числа: \n";
	cin >> A >> B;

	int temp;
	temp = A;
	A = B;
	B = temp;

	cout << "Новые значения реверснутых переменых: \n" << A << ' ' << B << endl;

	return 0;
}