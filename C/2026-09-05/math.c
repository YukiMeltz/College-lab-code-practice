#include <stdio.h>

int main()
{
	int a, b, c, sum;
	float avg;
	a = 5;
	b = 10;
	c = 15;
	sum = a + b + c;
	printf("Sum is %d\n", sum);
	avg = sum / 3;
	printf("Avg is %.2f\n", avg);
	return 0;
}

