#include <stdio.h>
#include "main.h"
#include<stdlib.h>
#include<ctype.h>
/**
 * main - adds poditive numbers & printing the result,
 * followed by a new line
 * @argv: number of arguments
 * @argc: array of arguments
 * Return: 0 on success , 1 if false
 */
int main(int argc, char *argv[])
{
	int a, b;
	int add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}
