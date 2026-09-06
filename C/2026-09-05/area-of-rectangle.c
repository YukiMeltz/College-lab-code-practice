#include <stdio.h>

int main()
{
	int a, b, area;
	printf("Enter length of rectangle : ");
	scanf("%d", &a);
	printf("Enter width of rectangle : ");
	scanf("%d", &b);
	area = a * b;
	printf("Area is %d", area);
	return 0;
}

