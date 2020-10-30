#include <stdio.h>

int main() {

	int A;

	printf("Type positive number A: \n");
	scanf("%d", &A);

	if (A % 2 == 0 && (A / 10 > 0 && A / 10 < 10)) {
        printf("The statement is true \n");
	} else {
        printf("The statement is false \n");
	}

	return 0;
}
