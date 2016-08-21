#include <stdio.h>
#include <stdlib.h>

void rotate(int* x, int rank)
{
	int* y = (int*)malloc(sizeof(int)*rank*rank);  // МоїХ

	for(int i=0; i<rank * rank; i++)
	{
		y[rank-1-i] = x[i];  // МоїХ
	}

	for(int i=0; i<rank*rank; i++)
	{
		x[i] = y[i];
	}

	free(y);
}

int main(int argc, char* argv[])
{
	int x[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int rank = 4;

	rotate(&x[0][0], rank);

	for(int i=0; i<rank; i++)
	{
		for(int j=0; j<rank; j++)
		{
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}

