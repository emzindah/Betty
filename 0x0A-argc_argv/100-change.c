#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 on success, 1 on Error
 */
int main(int argc, char *argv[])
{
	int no, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	no = atoi(argv[1]);
	res = 0;

	if (no < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && no >= 0; i++)
	{
		while (no >= coins[i])
		{
			res++;
			no -= coins[i];
		}

	}
	printf("%d\n", res);
	return (0);

}
