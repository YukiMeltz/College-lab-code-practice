#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n = 0;
	int sum = 0;
	int i = 0;
	printf("\nEnter a natural number : ");
	scanf("\n%d", &n);
    do
	{
		sum = sum + i;
		i++;
	} while (i <= n);
	printf("Sum of first %d natural numbers is %d", n, sum);
	return 0;
}
