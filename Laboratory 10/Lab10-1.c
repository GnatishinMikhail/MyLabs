#include <stdio.h>

int main() {

	int A, B;

	printf("Type integers A and B: \n");
	scanf("%d %d", &A, &B);

	if (A > 2 && B <= 3) {
        printf("The statement is true \n");
	} else {
        printf("The statement is false \n");
	}

	return 0;
}
