#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N, L, K, sum = 0, count = 0;

    printf("Type integers N > 0 - size of array, K and L, 1 <= K <= L <= N \n");
    scanf("%d %d %d", &N, &K, &L);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = K-1; i < L; i++) {
        sum += A[i];
        count++;
    }

    printf("Average of %d to %d elements is %.2lf: \n", K, L, (double)sum/count);

    free(A);

    return 0;
}
