#include <stdio.h>
#include <locale.h>

double RingS(double R1, double R2) {
    double PI = 3.14;
    return PI * R1 * R1 - PI * R2 * R2;
}

int main() {
    setlocale(LC_ALL, "");

    double Rad1, Rad2;

    for (int i = 0; i < 3; i++) {
    printf("Type 2 radiuses R1 and R2 (R1 > R2): \n");
    scanf("%lf %lf", &Rad1, &Rad2);
    printf("Area of the ring: %.2lf \n", RingS(Rad1, Rad2));
    }

    return 0;
}
