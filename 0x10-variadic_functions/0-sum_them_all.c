#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: 0, Otherwise something else
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list emt;
	unsigned int i, sum = 0;

	va_start(emt, n);

	if(n == 0)
	{
		return (0):
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(emt, int);
	}

	va_end(emt);


	return (sum);
}
"
