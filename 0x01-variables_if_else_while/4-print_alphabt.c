#include <stdio.h>

/**
 * main - Entry point
 * Description - Print all the letters except q and e
 * Return: always 0
 */

int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 102 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
