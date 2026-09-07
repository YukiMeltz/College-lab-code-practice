#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("swapping the numbers...\n");
    a = a + b;
    b = a - b;
    a = a - b;
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	return 0;
}

