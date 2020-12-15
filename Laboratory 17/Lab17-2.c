#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int checkOnArifm(int *arr, int size) {
    if (size < 2) return 0;
    int d = arr[1] - arr[0];
    for (int i = 2; i < size; i++) {
        if (arr[i]- arr[i-1] != d) return 0;
    }
    return d;
}

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

    printf("Result of the checking array on arithmetic progression: \n%d", checkOnArifm(A, N));

    free(A);

    return 0;
}
