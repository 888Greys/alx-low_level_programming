#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

