#include "main.h"

/**
 * 1-sawp - swap two integer
 * @a: first pointer
 * @b:second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
