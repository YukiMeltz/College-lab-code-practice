#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n = 0;
	int sum = 0;
	int i = 0;
	printf("\nEnter a natural number : ");
	scanf("\n%d", &n);
	while (i <= n)
	{
		sum = sum + i;
		i++;
	}
	printf("Sum of first %d natural numbers is %d", n, sum);
	return 0;
}
