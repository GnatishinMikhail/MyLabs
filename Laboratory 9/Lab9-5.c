#include <stdio.h>

int main() {

	int year;
	printf("Type number of the year\n");
	scanf_s("%d", &year);
	printf("Number of the century: %d", (year - 1) / 100 + 1);
	
	return 0;
}