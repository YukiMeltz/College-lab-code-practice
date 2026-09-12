#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int a, b, c;
	printf("\nEnter first number : ");
	scanf("\n%d", &a);
	printf("\nEnter second number : ");
	scanf("\n%d", &b);
	printf("\nEnter number number : ");
	scanf("\n%d", &c);
	if (a > b && a > c)
	{
		printf("\n%d is greatest.", a);
	}
	else if (b > a && b > c)
	{
		printf("\n%d is greatest.", b);
	}
	else
	{
		printf("\n%d is greatest.", c);
	}
	return 0;
}

