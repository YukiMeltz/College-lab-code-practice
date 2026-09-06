#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("sawpping the numbers...\n");
	c = a;
	a = b;
	b = c;
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	return 0;
}

