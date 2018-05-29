#include <stdio.h>
int main(void) {
	float celsius, fahrenheit;
	printf("Enter temperature in celsius:");
	scanf("%1f", &celsius);
	fahrenheit = (1,8 * celsius) + 32;
	printf("In Fahrenheits it is %1f", fahrenheit);
	return 0;
}