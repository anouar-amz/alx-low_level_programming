#include "main.h"

/**
 * _islower - function that checks if a character is lower or uppercase
 * @c: character to be checked
 * Return: 1 if lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
