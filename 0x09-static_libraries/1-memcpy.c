#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: num of bytes
 * @src: memory copied from
 * @dest: memory stored in
 *
 * Return: memory copied with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
