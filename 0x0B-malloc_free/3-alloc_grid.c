#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a pointer to two dimensional array
 * @width: width value
 * @height: height value
 *
 * Return: pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	r = (int **) malloc(sizeof(int *) * height);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		r[i] = (int *) malloc(sizeof(int) * width);
		if (r[i] == NULL)
		{
			free(r);
			for (j = 0; j <= i; j++)
				free(r[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			r[i][j] = 0;
		}
	}
	return (r);
}
