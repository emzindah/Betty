#include "main.h"
/**
 * clear_bit - function that set a value of a bit to 0
 * @index: position of index starting from 0
 * @n: pointer to the number
 * Return: 1 otherwise -1 if false
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t emt = 1;

	emt = emt << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = emt ^ *n;
	return (1);
}
