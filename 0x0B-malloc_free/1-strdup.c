#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a pointer to a new string which is a duplicate of the string
 * @str: char
 *
 * Return: nothing
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		aaa[j] = str[j];

	return (aaa);
}
