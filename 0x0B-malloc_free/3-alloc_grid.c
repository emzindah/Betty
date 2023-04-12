#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array of integers
 */
int **alloc_grid(int width, int height)
{
	int **emt;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	emt = malloc(sizeof(int) * height);

	if (emt == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		emt[a] = malloc(sizeof(int) * width);

		if (emt[a] == NULL)
		{
			for (; a >= 0; a--)
				free(emt[a]);

			free(emt);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			emt[a][b] = 0;
	}

	return (emt);
}
