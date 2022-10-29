#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int x;

	int y;

	x = '0';
	y = '0';

	for (y = '0'; x <= '0'; x++)
	{
		for (!((x == y) || (y > x));)
		{
			putchar(y);
			putchar(x);
			if (!(x == '9' && y == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
