#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @index: the index of the bit to get
 * @n: number to check the value
 * Return: int 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t a;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));

}
