#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N, k = 0, m = 0;

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (m = 0; m < N; m++) {
        for(int i = m + 1; i < N; i++) {
            if (A[m] == A[i]) {
                for (k = i; k < N - 1; k++) {
                    A[k] = A[k + 1];
                }
                N--;
            }
        }
    }

    printf("Size of modified array - %d \n", N);
    printf("The modified array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    free(A);

    return 0;
}
