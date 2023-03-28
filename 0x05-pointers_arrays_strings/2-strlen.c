#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string character
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int x = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}
	return (x);
}
