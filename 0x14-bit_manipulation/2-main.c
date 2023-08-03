#ifndef MAIN_H
#define MAIN_H
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to get (0-indexed, from right to left).
 *
 * Return: The value of the bit at the specified index
 */
int get_bit(unsigned int n, unsigned int index);
#endif
#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number from which to get the bit.
 * @index: The index of the bit to get (0-indexed, from right to left).
 *
 * Return: The value of the bit at the specified index
 */
int get_bit(unsigned int n, unsigned int index)
{
if (index >= sizeof(unsigned int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
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
int n;
n = get_bit(1024, 10);
printf("Bit at index 10: %d\n", n);
n = get_bit(98, 1);
printf("Bit at index 1: %d\n", n);
n = get_bit(1024, 0);
printf("Bit at index 0: %d\n", n);
return (0);
}

