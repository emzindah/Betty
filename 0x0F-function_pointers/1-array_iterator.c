#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function as a parameter on each element in array
 * @array: array
 * @size: number of elements to print
 * @action: pointer to a function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
