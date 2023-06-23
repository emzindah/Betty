#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98,
	       	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int i;

	i = int_i(array, 20, is_98);
	printf("%d\n", i);
	i = int_i(array, 20, abs_is_98);
	printf("%d\n", i);
	i = int_i(array, 20, is_strictly_positive);
	printf("%d\n", i);
	return (0);
}
