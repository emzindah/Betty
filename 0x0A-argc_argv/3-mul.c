#include<stdio.h>
#include "main.h"
/**
 * _atoi - convetrs a string into aan integer
 * @agrc: arguments count
 * @argv: argument array
 * Return: 0 on success & 1 otherwise
 */
int _atoi(int argc, char *argv[])
{
	int i, j;

	if (argc == 0)
	{
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
