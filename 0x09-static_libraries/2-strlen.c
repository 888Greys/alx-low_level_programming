#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: String
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}

return (longi);
}

