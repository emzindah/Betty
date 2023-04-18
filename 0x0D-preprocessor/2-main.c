#include <stdio.h>
#include <stdlib.h>

/**
 * program - prints the name of the file it was compiled from
 *
 * Return: nothing on success
 */
int main(void)
{
	printf("%d,\n",_FILE_);
	return (0);
}
