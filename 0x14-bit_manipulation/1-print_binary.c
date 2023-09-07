#include "main.h"

/**
 * p_b - print the binary representation of recursive numbers
 * @n: decimal input
 * Return: void
 */
void p_b(unsigned long int n)
{
	if (n == 0)
		return;
	p_b(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: decimal to convert
 *
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');
	else
	{
		p_b(n);
	}
}
