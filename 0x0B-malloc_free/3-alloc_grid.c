#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **jah;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	jah = malloc(sizeof(int *) * height);

	if (jah == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		jah[x] = malloc(sizeof(int) * width);

		if (jah[x] == NULL)
		{
			for (; x >= 0; x--)
				free(jah[x]);

			free(jah);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			jah[x][y] = 0;
	}

	return (jah);
}

