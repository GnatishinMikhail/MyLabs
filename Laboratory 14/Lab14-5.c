#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int A, B;

    printf("Type positive integers A and B: \n");
    scanf("%d %d", &A, &B);

    while (A != 0 && B != 0) {
        if (A > B) {
            A %= B;
        } else {
            B %= A;
        }
    }

    printf("The greatest common divisor is %d \n", A + B);

    return 0;
}
