#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int findNumberOfLocalMaximum(int *arr, int size) {
    int count = 0;

    if (arr[0] > arr[1]) count = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            count = i + 1;
        }
    }
    if (arr[size-1] > arr[size-2]) count = size;
    return count;
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

     if (findNumberOfLocalMaximum(A, N) == 0) {
        printf("There is no local maximums");
    } else {
        printf("Number of local maximum of the array: \n%d\n", findNumberOfLocalMaximum(A, N));
    }

    free(A);

    return 0;
}
