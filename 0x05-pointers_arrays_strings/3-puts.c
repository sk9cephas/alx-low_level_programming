#include "main.h"

/**
 * _puts - write string followed by new line
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}

