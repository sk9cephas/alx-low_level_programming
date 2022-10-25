#include "main.h"

/**
 * sawp_int - swap two integer
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
