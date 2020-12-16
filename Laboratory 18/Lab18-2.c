#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N;

    printf("Type integers N > 0 - size of arrays \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));
    double *B = (double*)malloc(N * sizeof(double));

    printf("Type %d integers - elements of array A \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Block of making array B
    for (int i = 0, sum = 0, count = 0; i < N; i++) {
        sum += A[i];
        count++;
        B[i] = (double)sum/count;
    }

    printf("Elements of array B: \n");
    for (int i = 0; i < N; i++) {
        printf("%.2lf ", B[i]);
    }

    free(A);
    free(B);

    return 0;
}
