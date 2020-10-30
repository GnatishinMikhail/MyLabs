#include <stdio.h>

int main() {

	int A;

	printf("Type 3-digit number A: \n");
	scanf("%d", &A);

	if (((A / 100) > ((A / 10) % 10) && ((A / 10) % 10) > (A % 10)) ||  //proverka na ubivanie
        ((A / 100) < ((A / 10) % 10) && ((A / 10) % 10) < (A % 10))) {  //proverka na vozrastanie
        printf("The statement is true \n");
	} else {
        printf("The statement is false \n");
	}

	return 0;
}
