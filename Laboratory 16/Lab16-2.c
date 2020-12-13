#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N, A, D;

    printf("Type integers N > 1 - size of array, A - first term, D - common ratio: \n");
    scanf("%d %d %d", &N, &A, &D);

    int *array = (int*)malloc(N * sizeof(int));

    array[0] = A;
    for (int i = 1; i < N; i++) {
        array[i] = array[i-1] * D;
    }

    printf("All terms of the geometric progression: \n");
    for(int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
