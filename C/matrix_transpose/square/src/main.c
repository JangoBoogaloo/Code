#include <stdio.h>

#define ROWS 5
#define COLS 5
#define SIZE 25
int main(void)
{
	int a[ROWS][COLS];
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLS; j++)
		{
			a[i][j] = i*COLS+j;
		}
	}

	printf("[");
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLS; j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	printf("]\n");

	int temp = -1;
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<i; j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}

	printf("[");
	for(int i=0; i<ROWS; i++)
	{
		for(int j=0; j<COLS; j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}
	printf("]\n");
	return 0;
}

