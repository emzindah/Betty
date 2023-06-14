#include "main.h"
#include <stdio.h>

/**
 * main - prints a number of arguments passed into it
 * @argc: count arguments
 * @argv: ignore arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("argc = %d/n", argc);
	return (0);
}
