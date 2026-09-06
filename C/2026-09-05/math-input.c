#include <stdio.h>

int main()
{
	int a, b, c, sum;
	float avg;
	printf("Enter the first number : ");
	scanf("%d", &a);
	printf("Enter the second number : ");
	scanf("%d", &b);
	printf("Enter the third number : ");
	scanf("%d", &c);
	sum = a + b + c;
	printf("Sum is %d\n", sum);
	avg = sum / 3;
	printf("Avg is %.2f\n", avg);
	return 0;
}

