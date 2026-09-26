#include <stdio.h>

int main(void)
{
	int i, j,  A[3][3], B[3][3];
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
	//	TRANSPOSE OF A TO B
	for (i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			B[i][j] = A[j][i];
		}
	}
	/*print matrix A*/
	printf("\nTRANSPOSE OF MATRIX A\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", B[i][j]);
		}
	}
	return 0;
}
