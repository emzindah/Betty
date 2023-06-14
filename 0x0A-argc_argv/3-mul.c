#include<stdio.h>
#include "main.h"
#include<stdlib.h>
/**
 * main - print the result of the multiplication followed by a new line
 * @agrc: arguments count
 * @argv: argument array
 * Return: 0 on success & 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
