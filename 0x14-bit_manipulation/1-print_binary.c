#include "main.h"

/**
 * print_binary - prints a binary that is equivalent to a decimal number
 * @m: number to print in binary
 */
void print_binary(unsigned long int m)
{
int i, count = 0;
unsigned long int volt;

for (i = 63; i >= 0; i--)
{
volt = m >> i;

if (volt & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}

