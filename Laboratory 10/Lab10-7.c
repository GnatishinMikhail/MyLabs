#include <stdio.h>

int main() {

	int a, b, c;

	printf("Type 3 sides of triangle a, b and c: \n");
	scanf("%d %d %d", &a, &b, &c);

	if (c < a + b && a < c + b && b < c + a) {
        printf("The statement is true \n");
	} else {
        printf("The statement is false \n");
	}

	return 0;
}
