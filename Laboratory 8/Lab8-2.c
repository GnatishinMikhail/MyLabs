#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int A, B;

	printf("Vvedite chisla A i B, gde A > B: \n");
	scanf_s("%d %d", &A, &B);
	printf("Kolichestvo otrezkov B, razmeshennyh na otrezke A - %d \n", A / B);

	return 0;
}
