#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n;
	printf("\nEnter a year : ");
	scanf("\n%d", &n);
	(n % 4 == 0 || n % 400 == 0 && n % 100 != 0)?
	printf("\n%d is a leap year.", n):
	printf("\n%d is not a leap year.", n);
	return 0;
}

