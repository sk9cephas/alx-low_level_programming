#include "main.h"

/**
 * 1-swap - swap two integers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
    int constant = *a;
        *a = *b;
        *b = constant;       
}