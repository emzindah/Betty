#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *Return: contents of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int n, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	n = 0;
	m = 0;

	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;
	ptr = malloc(sizeof(char) * (n + m + 1));

	if (ptr == NULL)
		return (NULL);
	n = m = 0;
	while (s1[n] != '\0')
	{
		ptr[n] = s1[n];
		n++;
	}

	while (s2[m] != '\0')
	{
		ptr[n] = s2[m];
		m++;
		n++;
	}
	ptr[n] = ptr[m] = '\0';
		return (ptr);
}
