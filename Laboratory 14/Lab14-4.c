#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int K = 0;
    float P, sum = 1000.0;

    printf("Type number of interest P (0 < P < 25): \n");
    scanf("%f", &P);

    while (sum <= 1100) {
        sum += sum * P / 100.0;
        K += 1;
    }

    printf("In a %d month contribution will be more then 1100 equals %.2f: \n", K, sum);

    return 0;
}
