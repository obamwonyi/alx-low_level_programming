#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid - free the grid
* @grid: the pointers to pointers of int
* @height: height of the grid
* Return: NONE
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		/**
		* freeing the pointers being pointed to by grid
		*/
		free(grid[i]);
	}

	/**
	* freeing the grid pointer itself
	*/
	free(grid);
}
