#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	int A, B, C;
	cout << "Введите три целых целых числа: \n";
	cin >> A >> B >> C;

	int temp;
	temp = C;
	C = B;
	B = A;
	A = temp;

	cout << "Новые значения переменных A-B B-C C-A: \n" << A << ' ' << B << ' ' << C << endl;

	return 0;
}
