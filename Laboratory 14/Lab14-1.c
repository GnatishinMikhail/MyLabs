#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int A, B;

    printf("Type integers A and B, A < B: \n");
    scanf("%d %d", &A, &B);


    printf("The right output is: \n");
    for (int i = A; i <= B; i++) {
            for (int j = 0; j < i; j++) {
                printf("%d ", i);
            }
    }

    return 0;
}
