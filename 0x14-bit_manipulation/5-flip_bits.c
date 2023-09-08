#include "main.h"
/**
 * flip_bits - function that returns a num of bits you need to flip
 * @n: first input
 * @m: second input to compare
 * Return: num of bits you flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;

	a = n ^ m;
	for (b = 0; a > 0;)
	{
		if ((a &  1) == 1)
			b++;
		a = a >> 1;
	}
	return (b);
}
