#include "main.h"
#include <unistd.h> 

/**
 * _putchar - writes the chaacter c to stdout
 * @c: char to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
