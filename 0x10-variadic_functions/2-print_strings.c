#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: number of strings to be printed.
 *
 * Description: If separator is NULL, do not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list emt;
	char *str;
	unsigned int i;

	va_start(emt, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(emt, char *);


		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(emt);
}
