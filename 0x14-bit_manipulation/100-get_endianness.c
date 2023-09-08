#include "main.h"
/**
 * get_endiannesss - check the sytem byte order
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int a, lil_big;

	a = 1;
	lil_big = (int) (((char *) &a)[0]);
	return (lil_big);
}
