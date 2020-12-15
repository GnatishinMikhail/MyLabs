#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N, first, second;

    printf("Type integers N > 0 - size of array \n");
    scanf("%d", &N);

    int *A = (int*)malloc(N * sizeof(int));

    printf("Type %d integers - elements of array \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N-1; i++) {
        for (int j = 1; j < N; j++) {
            if (i != j && A[j] == A[i]) {
                first = i + 1;
                second = j + 1;
            }
        }
    }

    printf("Number of first equal element is %d, number of second is %d \n", first, second);

    free(A);

    return 0;
}
