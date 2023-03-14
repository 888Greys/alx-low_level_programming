#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string to search
 * @c: character to find
 *
 * Return: pointer to first occurrence of character c in string s,
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}

