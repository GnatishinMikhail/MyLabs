#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");

    int N, min = INT_MAX, max = INT_MIN, min_count, max_count;

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    //Loop for a finding min and its counts
    for (int i = 0; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
            min_count = i;
        }
    }
    //Loop for insert zero element
    for (int i = N+1; i > min_count; i--) {
        A[i] = A[i-1];
    } A[min_count] = 0;


    for (int i = 0; i < N+1; i++) {
        if (i != min_count) {
            if (A[i] > max) {
                max = A[i];
                max_count = i;
            }
        }
    }
    for (int i = N+2; i > max_count; i--) {
        A[i] = A[i-1];
    } A[max_count+1] = 0;

    printf("The modified array: \n");
    for (int i = 0; i < N+2; i++) {
        printf("%d ", A[i]);
    }

    free(A);

    return 0;
}
