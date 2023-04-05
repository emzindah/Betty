#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: bytes in the initial segment
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, j, value, check;

	value = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		check = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[r])
			{
				value++;
				check = 0;
			}
		}
		if(check == 0)
	}
	return (0);
}
