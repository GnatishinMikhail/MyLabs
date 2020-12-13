#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N;
    int k; //numberOfLastUnevenElement

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Right output of the array: \n");
    for (int i = 1; i < N; i += 2) {
        printf("%d ", A[i]);
        k = i;
    }
    for (int i = 0; i < N; i += 2) {
        printf("%d ", A[k - 1 - i]);
    }

    free(A);

    return 0;
}
