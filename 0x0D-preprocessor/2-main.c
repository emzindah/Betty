#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: nothing on success
 */
int main(void)
{
	printf("%s\n",_FILE_);
	return (0);
}
