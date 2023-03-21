#include "main.h"

/**
 * _isalpha - checks if the character is alphabetic or not
 * @c: character to be checked
 * Return: 1 if it's alphabetic and 0 if not
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	return (0);
}
