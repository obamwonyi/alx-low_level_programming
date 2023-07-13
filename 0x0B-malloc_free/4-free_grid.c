#include "main.h"
/**
*free_grid - free grid
*@grid: grid to be freed
*@height: grid height
*Return: void
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
