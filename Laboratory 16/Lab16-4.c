#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N;

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Right output of the array: \n");
    for (int i = 0; i < N; i++) {
        if (i%2 == 0) {
            printf("%d ", A[i-(i/2)]);
        } else {
            printf("%d ", A[N-1-(i/2)]);
        }
    }

    free(A);

    return 0;
}
