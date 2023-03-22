#include "main.h"

/**
 * print_last_digit - function to print last digit of a number
 * @n: integer to be returned
 * Return: 0 Always
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
