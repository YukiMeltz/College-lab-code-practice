#include <stdio.h>

int main(void)
{
	int i, j,  A[3][3];
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
			if (i>j)
			    A[i][j] = 0;
		}
	}
	/*print matrix A*/
	printf("\nUPPER TRIANGLE OF MATRIX A\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for(j = 0; j < 3; j++)
		{
			printf("%3d", A[i][j]);
		}
	}
	return 0;
}
