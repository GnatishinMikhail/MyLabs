#include <stdio.h>
#include <locale.h>

int SignX(double X) {
    if (X < 0) {
        return -1;
    } else if (X == 0){
        return 0;
    } else {
        return 1;
    }
}

int main() {
    setlocale(LC_ALL, "");

    double A, B;

    printf("Type 2 real numbers A and B: \n");
    scanf("%lf %lf", &A, &B);
    printf("Value of the expression: %d \n", SignX(A) + SignX(B));

    return 0;
}
