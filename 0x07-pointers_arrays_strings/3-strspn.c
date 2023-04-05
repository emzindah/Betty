#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: bytes in the initial segment
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[r])
			{
				j++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (r);
		}
		s++;
	}
	return (r);
}
