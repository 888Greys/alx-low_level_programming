#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to standard output
 * @g: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errnumber is set appropriately.
 */
int _putchar(char g)
{
	return (write(1, &g, 1));
}


