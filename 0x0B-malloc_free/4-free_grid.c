#include "main.h"
#include <stdlib.h>
/**
  * free_grid - function to free the grid
  *
  * @grid: actual grid pointer
  *
  * @height: columns
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
