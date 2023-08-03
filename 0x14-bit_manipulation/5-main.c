#ifndef MAIN_H
#define MAIN_H
unsigned int flip_bits(unsigned int n, unsigned int m);
#endif
#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned int n, unsigned int m)
{
unsigned int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
#include <stdio.h>
#include "main.h"

/**
 * main - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

int main(void)
{
unsigned int n;
n = flip_bits(1024, 1);
printf("%u\n", n);
n = flip_bits(402, 98);
printf("%u\n", n);
n = flip_bits(1024, 3);
printf("%u\n", n);
n = flip_bits(1024, 1025);
printf("%u\n", n);
return (0);
}

