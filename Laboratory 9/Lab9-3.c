#include <stdio.h>

int main() {

	int K, N;

	printf("Type number of a day: \n");
	scanf_s("%d", &K);
	printf("Type number of a day of week of first January: \n");
	scanf_s("%d", &N);

	printf("Number of a day in the week - %d\n", (K + N - 1) % 7);

	return 0;
}
