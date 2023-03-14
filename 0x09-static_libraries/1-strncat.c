#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to concatenate
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

while (dest[dest_len] != '\0')
{
dest_len++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';

return (dest);
}

