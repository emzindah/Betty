#include "main.h"
#include <stdio.h>

/**
 * _prime_num - calcutate if prime number
 * @n: value to be checked
 * @m: iteration count
 * Return: 0
 */
int _prime_num(int n, int m)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n <= 1 || (n != m && n % m == 0))
	{
		return (0);
	}
	return (_prime_num(n, m + 1));
}
/**
 * is_prime_number - if the input integer is a prime number
 * @n: the input number
 * Return: 1 otherwise 0
 */
int is_prime_number(int n)
{
	return (_prime_num(n, 1));
}
