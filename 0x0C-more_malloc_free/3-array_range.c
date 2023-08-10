#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minmum range value
 * @max: maxmum value & number of elements
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int a;
	int size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	p = malloc(sizeof(*p) * size);


	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		p[a] = min++;

	free(p);
	return (p);
}
