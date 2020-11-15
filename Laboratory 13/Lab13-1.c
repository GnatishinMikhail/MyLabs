#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    double price;

    printf("Type price of 1 kilograms of sweets: \n");
    scanf("%lf", &price);
    for (float i = 1; i <= 10; i++) {
        printf("Price of %.1f kg - %.3lf rubles\n", i*0.1, price * 0.1 * i);
    }
    return 0;
}
