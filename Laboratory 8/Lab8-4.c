#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int A;

	printf("Vvedite dvuznachnoe chislo A: \n");
	scanf_s("%d", &A);
	printf("Chislo posle perestanovki cifr ishodnogo chisla - %d \n", A % 10 * 10 + A /10);

	return 0;
}
