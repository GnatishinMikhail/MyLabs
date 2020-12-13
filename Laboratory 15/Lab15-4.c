#include <stdio.h>
#include <locale.h>

int Quarter(double x, double y) {
    if (x > 0) {
        if (y > 0) {
            return 1;
        } else {
            return 4;
        }
    } else {
        if (y > 0) {
            return 2;
        } else {
            return 3;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");

    double X, Y;

    for (int i = 0; i < 3; i++) {
    printf("Type coordinates X and Y not equal 0: \n");
    scanf("%lf %lf", &X, &Y);
    printf("Number of a quarter: %d \n", Quarter(X, Y));
    }

    return 0;
}
