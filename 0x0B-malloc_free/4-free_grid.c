#include "main.h"
/**
 * free_grid -function to free memory take by a 2dim pointer array
 *
 * @grid:pointer to pointer
 *
 * @height:size
 *
 * Return:void
 */
void free_grid(int **grid, int  height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

