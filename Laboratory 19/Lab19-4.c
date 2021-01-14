#include <stdio.h>
#include <locale.h>
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

    for (int i = 0; i < N; i++) {
		if (A[i] < 0) {
            for (int j = N; j > i; j--) {
                A[j] = A[j-1];
            } A[i+1] = 0; N += 1;
		}
	}

    printf("The modified array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    free(A);

    return 0;
}
