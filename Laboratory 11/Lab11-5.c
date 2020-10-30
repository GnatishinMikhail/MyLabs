#include <stdio.h>

int main() {

	int A;

	printf("Type digit A: \n");
	scanf("%d", &A);

	if (A == 0) {
        printf("This is zero number \n");
	} else if (A > 0) {
        if (A % 2 == 0) {
            printf("This is positive even number \n");
        } else {
            printf("This is positive uneven number \n");
        }
	} else {
        if (A % 2 == 0) {
            printf("This is negative even number \n");
        } else {
            printf("This is negative uneven number \n");
        }
	}

	return 0;
}
