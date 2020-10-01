#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	int A, B, C;
	cout << "Введите три целых целых числа: \n";
	cin >> A >> B >> C;

	int temp;
	temp = A;
	A = C;
	C = B;
	B = temp;

	cout << "Новые значения переменых A-C B-A C-B: \n" << A << ' ' << B << ' ' << C << endl;

	return 0;
}