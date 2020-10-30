#include <stdio.h>

int main() {

	int A, B, C;

	printf("Type three numbers A, B and C: \n");
	scanf("%d %d %d", &A, &B, &C);

	if (C <= A && C <= B) {
        printf("Sum of the largest numbers: %d\n", A + B);
	} else
	if (B <= A && B <= C) {
        printf("Sum of the largest numbers: %d\n", A + C);
	} else
    if (A <= B && A <= C) {
        printf("Sum of the largest numbers: %d\n", C + B);
	}
	return 0;
}
