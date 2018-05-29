#include <stdio.h>

int main(void) {
	int minimal_number, diapason, random_number, guess_number;
	printf("Enter minimal number:");
	scanf("%d\n", &minimal_number);
	printf("Enter width of diapason:");
	scanf("%d\n", &diapason);
	random_number = minimal_number + rand() % diapason;
	printf("%d\n", random_number);
	return 0;
}