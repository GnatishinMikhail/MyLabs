#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N;

    printf("Type integers N > 0 - size of arrays \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));
    int *B = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array A \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    printf("Type %d integers - elements of array B \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // Block of reversing arrays
    for (int i = 0, temp; i < N; i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    printf("Reversed arrays: \nArray A: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\nArray B: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    printf("Meow");

    free(A);
    free(B);

    return 0;
}
