#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	int A, B, C;
	cout << "Введите три целых целых числа: \n";
	cin >> A >> B >> C;

	int temp;
	temp = B;
	B = C;
	C = A;
	A = temp;

	cout << "Новые значения переменных A-C B-A C-B: \n" << A << ' ' << B << ' ' << C << endl;

	return 0;
}
