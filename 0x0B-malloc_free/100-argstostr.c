#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *argstostr -  concatenates all the arguments of the program
 * @ac: argc
 * @av: argv
 * Return: a pointer to a string or NULL
 */
char *argstostr(int ac, char **av)
{
	int a, b, m, n;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	m = n = 0;

	for (a = 0; a < ac ; a++)
	{
		for (b = 0; av[a][b]; b++)
		n++;
	}
	n = n + ac;

	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; a++)
		{
			(str[m] = av[a][b]);
			m++;
		}
		if (str[m] == '\0')
		{
			str[m++] = '\n';
		}
	}
	return (str);

}

