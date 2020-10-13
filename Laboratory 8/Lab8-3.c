#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int A, B;

	printf("Vvedite chisla A i B, gde A > B: \n");
	scanf_s("%d %d", &A, &B);
	printf("Dlina nezanytoi chasti otrezka A - %d \n", A % B);

	return 0;
}
