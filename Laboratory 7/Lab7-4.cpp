#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	int V1, V2, S, T;

	cout << "Скорость первого автомобиля = ";
	cin >> V1;
	cout << "Скорость второго автомобиля = ";
	cin >> V2;
	cout << "Первоначальное расстояние между ними = ";
	cin >> S;
	cout << "Время = ";
	cin >> T;

	if (abs(V1 - V2) != 0) {
		cout << "\nРасстояние между ними через " << T << " часов: " << abs(V1 - V2) * T + S << endl;
	}
	else {
		cout << "\nАвтомобили не удаляются от друг друга" << endl;
	}

	return 0;
}