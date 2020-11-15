#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");

    int N;
    float A, sum = 0;

    printf("Type integer N > 0 and float A: \n");
    scanf("%d %f", &N, &A);
    printf("The sum we need equal: \n");
    for (int i = 0; i <= N; i++) {
        sum += powf(A, i) * powf(-1, i);
    }
    printf("%f\n", sum);

    return 0;
}
