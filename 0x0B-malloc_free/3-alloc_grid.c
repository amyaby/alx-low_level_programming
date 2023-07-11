#include "main.h"
#include <stdio.h>
#include <stdlib.h>


int **alloc_grid(int width, int height)
{
	int **arr;
	int row = 0, column = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (column = 0; column < height; column++)
	{
		arr[column] = malloc(sizeof(int) * width);
		if (arr[column] == NULL)
		{
			for (column = 0; column > 0; column--)
			{
				free(arr[column]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (column = 0; column < height; column++)
	{
		for (row = 0; row < width; width++)
		{
			arr[column][row] = 0;
		}
	}
		return (arr);
}
