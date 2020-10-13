#include <stdio.h>

int main() {

	int N;

	printf("Type how much seconds gone since beginning of the day: \n");
	scanf_s("%d", &N);
	printf("Amount of seconds gone since last minutes - %d \n", N % 60);

	return 0;
}