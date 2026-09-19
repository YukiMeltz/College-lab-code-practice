#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n;
	int i;
	int j;
	printf("\nEnter the number : ");
	scanf("%d" , &n);
	for (i =1; i <= n; i++)
	{
		for (j =1; j<= i;j++)
		{
			printf("%c", 'A' + j-1);
		}
		printf("\n");
	}
	return 0;
}
