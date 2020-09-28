#include <iostream>
using namespace std;

int main() {
		setlocale(LC_ALL, "Rus");
	
	float A, B, C;
	cout << "Введите координаты трех точек на числовой оси: ";
	cin >> A >> B >> C;

	float AB, BC, sum;
	AB = abs(B - A);
	BC = abs(C - B);
	sum = AB + BC;

	cout << "Длина отрезков AB и BC равна " << AB << " и " << BC << " соответственно" << endl;
	cout << "А их сумма равна " << sum << endl;

	return 0;
}