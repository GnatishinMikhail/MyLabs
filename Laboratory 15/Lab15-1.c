#include <stdio.h>
#include <locale.h>

double PowerA3(double A) {
    double B;
    B = A * A * A;
    return B;
}

int main() {
    setlocale(LC_ALL, "");

    double In;

    printf("Type 5 different integers: \n");
    for (int i = 0; i < 5; i++) {
    scanf("%lf", &In);
    printf("Third degree of this integer - %.2lf \n", PowerA3(In));
    }

    return 0;
}
