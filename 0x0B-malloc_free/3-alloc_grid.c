#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width 
* @height: height 
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **A;
	int row = 0, column = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	A = malloc(sizeof(int *) * height);

	if (A == NULL)
		return (NULL);

	while (column < height)
	{
		A[column] = malloc(sizeof(int) * width);
		if (A[column] == NULL)
		{
			while (column > 0)
			{
				column--;
				free(A[column]);
			}
			free(A);
			return (NULL);
		}
		column++;
	}

	while (column < height)
	{
		while (row < width)
		{
			arr[column][row] = 0;
		}
	}
		return (arr);
}
