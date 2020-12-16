#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int findNumOfMin(int *arr, int size) {
    int min = arr[0], count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            count = i;
        }
    }
    return count + 1;
}

int findNumOfMax(int *arr, int size) {
    int max = arr[0], count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count = i;
        }
    }
    return count + 1;
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

    printf("Numbers of min and max: \n%d %d \n", findNumOfMin(A, N), findNumOfMax(A, N));

    int first, second;
    if (findNumOfMax(A, N) < findNumOfMin(A, N)) {
        first = findNumOfMax(A, N);
        second = findNumOfMin(A, N);
    } else {
        first = findNumOfMin(A, N);
        second = findNumOfMax(A, N);
    }

    for (int i = first; i < second - 1; i++) {
        A[i] = 0;
    }

    printf("The modified array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    free(A);

    return 0;
}
