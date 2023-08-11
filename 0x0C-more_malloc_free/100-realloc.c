#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory using malloc & free
 * @old_size: size allocated previously by malloc
 * @new_size: new size allocated
 * @ptr:  pointer to the memory previously allocated
 *
 * Return: a newly allocated pointer to memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int a, b;
	char *old = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
		if (new == NULL)
			return (NULL);

	if (new_size > old_size)
		b = old_size;

	for (a = 0; a < b; a++)
		new[a] = old[a];

	free(ptr);
	return (new);
}
