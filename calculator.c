#include <stdio.h>
int main(void) {
	int a, b, res;
	char oper;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("\nEnter second number:");
	scanf("%d",&a);
	printf("\nEnter operation:");
	scanf("%c",&oper);
		switch(oper){
			case '+':
			res = a + b;
		break;
			case '-':
			res = a - b;
		break;
			case '*':
			res = a * b;
		break;
			case '/':
			res = a / b;
		break;
		}
		printf("\nResult is:%d", res);
	return 0;
};