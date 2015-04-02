#include <stdio.h>
static void print_array(int array[], const int size)
{
	int i=0;
	for(i=0; i<size; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n");
}
int main(void)
{
	int array[5] = {1,2,4,3,5};
	int i=0;
	int temp = -1;
	for(i=0; i<4; i++)
	{
		if(0 == i%2)
		{
			if(array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
		else
		{
			if(array[i] < array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}

	print_array(array, 5);

	return 0;
}
