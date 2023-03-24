#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of character '\'
 */

void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
