#include <stdio.h>

int main()
{
	printf("\nHIMANSHU RAJ");
	int n;
	int i;
	int j;
	int track = 1;
	printf("\nEnter the number : ");
	scanf("%d" , &n);
	for (i =1; i <= n; i++)
	{
		track = i;
		for (j =1; j<= i;j++)
		{
			printf("%d", track);
			track++;
		}
		printf("\n");
	}
	return 0;
}
