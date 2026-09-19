#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n;
	int i;
	int found = 0;
	printf("\nEnter the number : ");
	scanf("%d" , &n);
	for (i = 2; !found; i++)
	{
		if(n % i == 0)
		{
			found = 1;
			break;
		}
		else
		{
			continue;
		}
	}
	printf("%d is the divisor of %d",i,n);
	return 0;
}
