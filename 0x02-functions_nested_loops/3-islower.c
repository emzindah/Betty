#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: char to b checked
 * Return: 1 if a char is lowercase, otherwise .0
*/

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
