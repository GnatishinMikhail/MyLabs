#include <stdio.h>

int main() {

	int x, y;

	printf("Type coordinates of dot A: \n");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
        printf("Dot is located in 1 quarter\n");
    if (x < 0 && y > 0)
        printf("Dot is located in 2 quarter\n");
    if (x < 0 && y < 0)
        printf("Dot is located in 3 quarter\n");
    if (x > 0 && y < 0)
        printf("Dot is located in 4 quarter\n");

	return 0;
}
