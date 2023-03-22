#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int x, w, y, z;

	for (x = 0; x <= 2; x++)
	{
		for (w = 0; w <= 9; w++)
		{
			if ((x <= 1 && w <= 9) || (x <= 2 && w <= 3))
			{
				for (y = 0; y <= 5; y++)
				{
					for (z = 0; z <= 9; z++)
					{
						_putchar(x + '0');
						_putchar(w + '0');
						_putchar(58);
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
