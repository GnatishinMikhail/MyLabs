#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int N, a = 0;

    printf("Type digit N > 0: \n");
    scanf("%d", &N);
    printf("N^2 with every iteration is: \n");
    for (int i = 1; i <= N; i++) {
        a += 2 * i - 1;
        printf("%d\n", a);
    }

    return 0;
}
