#include <stdio.h>

int main() {

	int A, B, C, areaA, areaB;

	printf("Type sides of rectangle and side of square: \n");
	scanf_s("%d %d %d", &A, &B, &C);

	areaA = A / C;
	areaB = B / C;

	printf("Quantity of squares that can be fitted in rectangle: %d\n", areaA * areaB);
	printf("Unused part of the rectangle: %d\n", A * B - areaA * areaB * C * C);

	return 0;
}
