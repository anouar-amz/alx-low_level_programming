#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
		char x = 97;

		while (x <= 122)
		{
			putchar(x);
			x++;
		}
		putchar('\n');
		return (0);
}

