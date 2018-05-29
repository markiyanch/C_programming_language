#include <stdio.h>
#include <math.h>

int main(void) {
double a, b, c, discriminant, x1, x2, fpart;
printf("Enter values of a, b and c:");
scanf("%1f %1f %1f", &a, &b, &c);
discriminant = b*b-4*a*c;
fpart = -b/(2*a);
if(discriminant > 0){
	x1 = fpart - sqrt(discriminant)/(2*a);
	x2 = fpart + sqrt(discriminant)/(2*a);
	printf("/nx1 = %.2lf/nx2 = %.2lf", x1, x2);
}
	else if(discriminant == 0){
		printf("/nx1 = x2 = %.2lf", fpart);
	}
		else{
			printf("There are no roots, because determinant = 0.");
		}
	return 0;
}