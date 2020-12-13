#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "");

    int N;

    printf("Type integer N > 0 - size of array: \n");
    scanf("%d", &N);

    int *array = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        array[i] = (i * 2) + 1;
        printf("%d ", array[i]);
    }

    return 0;
}
