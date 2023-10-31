#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: param1, width
 * @height: param2, height
 * Return: cahr * pointer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int w, h, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	/* allocate memory for each row*/
	for (h = 0; h < height; h++)
	{
		p[h] = malloc(sizeof(int) * width);
		/** If allocation fails,
		 * free previously allocated memory and return NULL
		*/
		if (p[h] == NULL)
		{
			for (i = 0; i < h; i++)
				free(p[i]);

			free(p);
			return (NULL);
		}

		/* initialize each element to zero.*/
		for (w = 0; w < width; w++)
			p[h][w] = 0;

	}
	return (p);
}
