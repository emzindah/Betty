#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string containing binary numbers
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	size_t a, n, pow, i, sum = 0;
	int base = 2;

	pow = 1;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		;
	}
	if (a == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		for (i = a - 1; i > 0; i--)
		pow = pow * base;
		sum += (pow * (b[n] - 48));
		a--;
		pow = 1;
	}
	return (sum);
}
