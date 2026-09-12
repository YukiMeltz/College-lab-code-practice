#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n;
	printf("\nEnter a number : ");
	scanf("\n%d", &n);
	(n % 5 != 0 && n % 7 != 0) ?
	printf("\n%d is not divisible by both 5 and 7.", n):
	printf("\n%d is divisible by 5 or by 7.", n);
	return 0;
}

