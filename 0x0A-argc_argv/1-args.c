#include "main.h"
#include <stdio.h>

/**
 * main - prints a number of arguments passed into it
 * @argc: count arguments
 * @argv: ignore arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("argv = %d/n", argc);
	return (0);
}
