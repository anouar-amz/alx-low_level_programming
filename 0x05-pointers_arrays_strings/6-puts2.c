#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: nothing
 */

void puts2(char *str)
{
	int index;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (index = 0; index < a; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
