#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int findLastUnevenNumber(int *arr, int size) {
    int lastUnevenNumber = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] %2 != 0) {
            lastUnevenNumber = arr[i];
        }
    }
    return lastUnevenNumber;
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

    if (findLastUnevenNumber(A, N) == 0) {
        printf("There is no uneven numbers \n");
    } else {
        printf("The array with changed uneven numbers: \n");
        for (int i = 0; i < N; i++) {
        if (A[i] %2 != 0) {
            A[i] += findLastUnevenNumber(A, N);
        }
        printf("%d ", A[i]);
        }
    }

    free(A);

    return 0;
}
