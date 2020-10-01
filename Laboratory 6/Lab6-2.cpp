#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");

	int A, B, C;
	cout << "Введите три целых целых числа: \n";
	cin >> A >> B >> C;

	int temp;
	temp = A;
	A = B;
	B = C;
	C = temp;

	cout << "Новые значения переменых A-B B-C C-A: \n" << A << ' ' << B << ' ' << C << endl;

	return 0;
}