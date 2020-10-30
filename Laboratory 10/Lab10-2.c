#include <stdio.h>

int main() {

	int A, B, C;

	printf("Type integers A, B and C: \n");
	scanf("%d %d %d", &A, &B, &C);

	if (A < B && B < C) {
        printf("The statement is true \n");
	} else {
        printf("The statement is false \n");
	}

	return 0;
}
