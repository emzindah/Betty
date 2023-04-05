#include "main.h"

/**
 * print_chessboard - that prints the chessboard.
 * @a: array
 * Return: 0
 */
void print_chessboard(char c (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
