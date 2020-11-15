#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int N;
    float a = 1, b = 1.1;

    printf("Type number of factors: \n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        a *= b;
        b += 0.1;
    }
    printf("%f", a);

    return 0;
}
