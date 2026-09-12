#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n;
	printf("\nEnter a number : ");
	scanf("%d", &n);
	if (n % 5 == 0 || n % 7 == 0)
	{
		printf("%d is either divible by 5 or 7 or both", n);
	}
	else
	{
		printf("%d is neither divisble by 5 nor by 7");
    }
	return 0;
}

