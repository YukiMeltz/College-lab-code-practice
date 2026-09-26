#include <stdio.h>

int main(void)
{
	int i, j,k,l,m  ,A[3][3], B[3][3],prod[3][3],temp1;
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
	//	product section
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			temp1 = 0;
			for(k = 0; k < 3; k++)
			{
				temp1 = temp1 + A[i][k]*B[k][i];
			}
			prod[i][j] = temp1;
			temp1 = 0;
		}
	}
	/*print matrix PROD*/
	printf("\nMATRIX PRODUCT");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", prod[i][j]);
		}
	}
	
	return 0;
}
