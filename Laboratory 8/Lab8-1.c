#include <stdio.h>
#include <math.h>

int main() {

	int a;

	printf("Vvedite razmer faila v baitah \n");
	scanf_s("%d", &a);
	printf("Kolichestvo polnyh kilobytov, kotorye zanimaet danniy fail: %.0f\n", ceil((double)a / 1024));

	return 0;
}
