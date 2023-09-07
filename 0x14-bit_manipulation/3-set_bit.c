#include "main.h"
/**
 * set_bit - set the bit of a num to 1
 * @n: pointer to the manipulated bit
 * @index: position of the bit to be manipulated
 * Return: 1 otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t emt;

	if (index > sizeof(size_t) * 8)
		return (-1);
	emt = 1;
	emt = emt << index;
	*n = ((*n) | emt);
	return (1);
}
