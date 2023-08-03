#include "main.h"

/**
 * acquire_bit - returns the value of a bit at an index in a decimal number.
 * @num: number to search
 * @indexb: index of the bit
 *
 * Return: value of  bit
 */
int acquire_bit(unsigned long int num, unsigned int indexb)
{
int bit_value;

if (indexb > 63)
return (-1);

bit_value = (num >> indexb) & 1;
return (bit_value);
}

