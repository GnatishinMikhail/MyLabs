#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int N, i = 2, fibSum = 1, fib2 = 1, fib1 = 1;

    printf("Type integer N > 1: \n");
    scanf("%d", &N);

    while (fibSum < N){
        fibSum = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibSum;
        i++;
    }

    printf("The serial number of Fibonacci number is %d \n", i);

    return 0;
}
