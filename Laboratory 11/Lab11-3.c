#include <stdio.h>
#include <math.h>

int main() {

	int A, B, C;

	printf("Type three numbers A, B and C: \n");
	scanf("%d %d %d", &A, &B, &C);

	if (abs(A - C) < abs(A - B)) {
        printf("Dot C closer to A and distance is %d\n", abs(A - C));
	} else {
        printf("Dot B closer to A and distance is %d\n", abs(A - B));
	}

	return 0;
}
