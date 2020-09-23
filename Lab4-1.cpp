#include <iostream>

int main() {
	setlocale(LC_ALL, "Rus");

	int a, b, S, P;

	std::cout << "Введите стороны прямоугольника: ";
	std::cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);

	std::cout << "Площадь S равна " << S << std::endl;
	std::cout << "Периметр Р равен " << P << std::endl;


	return 0;
}
