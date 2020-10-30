#include <stdio.h>

int main() {

	int A;

	printf("Type digit A: \n");
	scanf("%d", &A);

	if (A < 10) {
        if (A % 2 == 0) {
            printf("This is even 1-digit number");
        } else {
            printf("This is uneven 1-digit number");
        }
	} else if (A < 100) {
        if (A % 2 == 0) {
            printf("This is even 2-digit number");
        } else {
            printf("This is uneven 2-digit number");
        }
	} else if (A < 1000) {
        if (A % 2 == 0) {
            printf("This is even 3-digit number");
        } else {
            printf("This is uneven 3-digit number");
        }
	}

	return 0;
}
