#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N, A, B;

    printf("Type integers N > 2 - size of array, A - first term, B - second term: \n");
    scanf("%d %d %d", &N, &A, &B);

    int *array = (int*)malloc(N * sizeof(int));

    array[0] = A;
    array[1] = B;
    array[2] = array[0] + array[1];
    for (int i = 3; i < N; i++) {
        array[i] = array[i-1] * 2;
    }

    printf("The array: \n");
    for(int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}
