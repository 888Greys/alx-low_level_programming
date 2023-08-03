#ifndef MAIN_H
#define MAIN_H
/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to set (0-indexed, from right to left).
 */
void set_bit(unsigned long int *n, unsigned int index);
#endif
#include "main.h"
/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to set (0-indexed, from right to left).
 */
void set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
*n |= mask;
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
set_bit(&n, 5);
printf("%lu\n", n);
n = 0;
set_bit(&n, 10);
printf("%lu\n", n);
n = 98;
set_bit(&n, 0);
printf("%lu\n", n);
return (0);
}

