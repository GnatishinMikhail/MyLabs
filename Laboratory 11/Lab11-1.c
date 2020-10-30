#include <stdio.h>

int main() {

	int A, B;

	printf("Type two digits A and B: \n");
	scanf("%d %d", &A, &B);

	if (A != B) {
        if (A > B) {
            B = A;
        } else {
            A = B;
        }
	} else {
        A = 0;
        B = 0;
	}
    printf("%d %d", A, B);

	return 0;
}
