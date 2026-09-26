#include <stdio.h>

int main(void)
{
	int i, j,  A[3][3], B[3][3],sum[3][3],sub[3][3];
	printf("HIMANSHU RAJ");
	printf("\nEnter a element of Matrix A (3x3) : ");
	/* input matrix A*/
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\nEnter element at position [%d][%d] for MAT-A : ",i,j);
			scanf("%d", &A[i][j]);
		}
	}
	/* input matrix B*/
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("\nEnter element at position [%d][%d] for MAT-B : ",i,j);
			scanf("%d", &B[i][j]);
		}
	}
	/*print matrix A*/
	printf("\nMATRIX A");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", A[i][j]);
		}
	}
	/*print matrix B*/
	printf("\nMATRIX B");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", B[i][j]);
		}
	}
	//	sum and sub now
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sum[i][j] = A[i][j] + B[i][j];
			sub[i][j] = A[i][j] - B[i][j];
		}
	}
	/*print matrix SUM*/
	printf("\nMATRIX SUM");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", sum[i][j]);
		}
	}
	/*print matrix SUB*/
	printf("\nMATRIX SUB");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", sub[i][j]);
		}
	}
	return 0;
}
