#include <stdio.h>
#include <stdlib.h>

/**
* free_grid  - frees a 2 dimensional grid previously created.
* @grid: the grid to free.
* @height: height of the grid.
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
		free(grid);
}
