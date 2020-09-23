#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	float a, b, aModul, bModule;

	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;

	aModul = abs(a);
	bModule = abs(b);

	cout << "Сумма их модулей равна " << aModul + bModule << endl;
	cout << "Разность их модулей равна " << abs(aModul - bModule) << endl;
	cout << "Произведение их модулей равно " << aModul * bModule << endl;
	cout << "Частное их модулей равно " << aModul / bModule << endl;

	return 0;
}