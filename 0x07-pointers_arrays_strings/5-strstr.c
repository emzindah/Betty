#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input value
 * @needle: input value
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	for (; *i != '\0'; i++)
	{

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);

	}
	return (0);
}
