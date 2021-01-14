#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N, k = 0;

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 1; i < N; i++) {
        if (A[k] != A[i]) {
            k++;
            A[k] = A[i];
        }
    }
    k++;

    printf("The modified array: \n");
    for (int i = 0; i < k; i++) {
        printf("%d ", A[i]);
    }

    free(A);

    return 0;
}
