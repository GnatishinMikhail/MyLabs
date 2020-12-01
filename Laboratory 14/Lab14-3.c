#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int N, K, sum = 0;

    printf("Type integer N: \n");
    scanf("%d", &N);

    for (int i = 1; sum < N; i++) {
            sum += i;
            K = i;
    }

    printf("The smallest of integer K when sum 1+2+...K >= N is: \n");
    printf("%d", K);

    return 0;
}
