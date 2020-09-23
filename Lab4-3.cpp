#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");

	float a, b;

	cout << "Введите два числа: ";
	cin >> a >> b;

	cout << "Их среднее арефметическое равно " << (a + b) / 2;

	return 0;
}