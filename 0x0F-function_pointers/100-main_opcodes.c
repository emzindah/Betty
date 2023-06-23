#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments count
 * @argv: array of arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (index = 0; index < bytes; index++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[index]);
				;
		}
		printf("%02hhx ", array[index]);
	}
	return (0);
}

