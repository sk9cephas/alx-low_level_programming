#include "main.h"

/**
<<<<<<< HEAD
 * 1-sawp - swap two integer
 * @a: first pointer
 * @b:second pointer
 * Return: void
 */

void swap_int(int*a, int *b)
{
	*a = 98;
	
	*b = 66;

	*
=======
 * 1-swap - swap two integers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int q;

    q = *a;
    *a = *b;
    *b = q;
}
>>>>>>> f031bd673b749efeee9555cd78f131fa920fee8b
