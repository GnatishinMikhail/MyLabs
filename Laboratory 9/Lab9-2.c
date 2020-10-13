#include <stdio.h>

int main() {

	int K;

	printf("Type number of a day: \n");
	scanf_s("%d", &K);

	printf("Number of a day in the week - %d\n", K % 7);

	return 0;
}