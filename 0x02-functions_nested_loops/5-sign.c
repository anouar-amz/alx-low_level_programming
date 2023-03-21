#include "main.h"

/**
 * print_sign - prints the character's sign
 * @n: to be checked
 * Return: 1 if + or 0 if 0 or -1 if -
 */

int print_sign(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	return (1);
}
