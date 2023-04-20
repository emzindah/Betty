#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function to compare value
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
