#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int A, B;

    printf("Type integers A and B, A > B: \n");
    scanf("%d %d", &A, &B);

    int rest = A;
    printf("The rest of segment A is: \n");
    for (int i = B; i <= A; i += B) {
            rest -= B;
    }

    printf("%d", rest);

    return 0;
}
