#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search in
 * @c: character to look for
 *
 * Return: first occurence of @c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
