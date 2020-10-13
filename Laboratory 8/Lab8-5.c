#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");

	int A;

	printf("Vvedite trehznachoe chislo A: \n");
	scanf_s("%d", &A);
	printf("Chislo posle perestanovki pervoi cifri v konec - %d \n", A % 100 * 10 + A / 100);

	return 0;
}
