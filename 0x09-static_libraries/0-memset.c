#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointed destination
 * @b: the value desired
 * @n: num of bytes to be changed
 *
 * Return: array changed with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
