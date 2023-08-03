#include "main.h"

/**
 * toss_bits - counts the num of bits to change
 * to get from one number to another
 * @num: first number
 * @g: second number
 *
 * Return: number of bits to change
 */
unsigned int toss_bits(unsigned long int num, unsigned long int g)
{
int i, count = 0;
unsigned long int volt;
unsigned long int exclusive = num ^ g;

for (i = 63; i >= 0; i--)
{
volt = exclusive >> i;
if (volt & 1)
count++;
}

return (count);
}

