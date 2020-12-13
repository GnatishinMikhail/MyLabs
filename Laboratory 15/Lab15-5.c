#include <stdio.h>
#include <locale.h>
#include <math.h>

double Fact2(int N) {
    if (N % 2 == 0) {
        if (N == 2) {
            return 2;
        }
        return N * Fact2(N - 2);
    } else {
        if (N == 1) {
            return 1;
        }
        return N * Fact2(N - 2);
    }
}

int main() {
    setlocale(LC_ALL, "");

    int In;

    printf("Type integer N > 0: \n");
    scanf("%d", &In);
    printf("Number of a quarter: %.2lf \n", Fact2(In));

    return 0;
}
