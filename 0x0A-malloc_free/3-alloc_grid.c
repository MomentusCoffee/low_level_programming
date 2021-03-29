#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - return pointer in 2d array
 * @width: int
 * @height: int
 * Return: arr
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x;
	int y;
	int z;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * height);

	if (arr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (z = 0; z < x; z++)
			{
				free(arr[z]);
			}
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
