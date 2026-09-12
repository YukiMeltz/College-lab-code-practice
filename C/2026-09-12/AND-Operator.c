#include <stdio.h>

int main()
{
	
	printf("\nHIMANSHU RAJ");
	int n;
	printf("\nEnter a number : ");
	scanf("\n%d", &n);
	if (n % 5 == 0 && n % 7 == 0)
	{
		printf("\n%d is divisible by both 5 and 7.", n);
	}
	else if (n % 5 == 0)
	{
		printf("\n%d is divisible by 5.", n);
	}
	else if (n % 7 == 0)
	{
		printf("\n%d is divisible by 5.", n);
	}
	else
	{
		printf("\n%d is neither divisible by 5 nor by 7.", n);
	}
	return 0;
}

