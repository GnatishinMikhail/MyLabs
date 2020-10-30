#include <stdio.h>

int main() {

	int A;

	printf("Type 4-digit number A: \n");
	scanf("%d", &A);

	int th = A / 1000;
	int hun = A / 100 % 10;
	int doz = A / 10 % 10;
	int uni = A % 10;

	if (th == uni && hun == doz) {
        printf("The statement is true \n");
	} else {
        printf("The statement is false \n");
	}

	return 0;
}
