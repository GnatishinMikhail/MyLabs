#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int findMinOfEvenElements(int *arr, int size, int min) {
    min = arr[0];
    for (int i = 1; i < size; i += 2) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    setlocale(LC_ALL, "");

    int N, minimum;

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Minimum of even elements of the array: \n%d", findMinOfEvenElements(A, N, minimum));

    free(A);

    return 0;
}
