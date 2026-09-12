#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n = 0;
	int sum = 0;
	int i;
	printf("\nEnter a natural number : ");
	scanf("\n%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("Sum of first %d natural numbers is %d", n, sum);
	return 0;
}

