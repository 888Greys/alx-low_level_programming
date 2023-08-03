#ifndef MAIN_H
#define MAIN_H
/**
 * clear_bit - Clears a bit at a given index to 0.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to clear (0-indexed, from right to left).
 */
void clear_bit(unsigned long int *n, unsigned int index);
#endif
#include "main.h"
/**
 * clear_bit - Clears a bit at a given index to 0.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to clear (0-indexed, from right to left).
 */
void clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
*n &= ~mask;
}
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n;

n = 1024;
clear_bit(&n, 10);
printf("%lu\n", n);
n = 0;
clear_bit(&n, 10);
printf("%lu\n", n);
n = 98;
clear_bit(&n, 1);
printf("%lu\n", n);
return (0);
}

