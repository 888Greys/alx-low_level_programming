#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}

